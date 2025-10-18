#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "driver/ledc.h"
#include <math.h>

// Define pins
#define SOFTWARE_PIN GPIO_NUM_26  // Software waveform pin
#define PWM_PIN GPIO_NUM_25      // PWM output pin

// Sine wave parameters
#define SIGNAL_FREQUENCY 1000    // 1 kHz sine wave frequency for GPIO26
#define SIGNAL_PERIOD_MS (1000 / SIGNAL_FREQUENCY)
#define SINE_RESOLUTION 256      // Number of points in the sine wave lookup table
#define PI 3.14159265359

// PWM parameters
#define PWM_FREQUENCY 1000      // PWM frequency for GPIO25 (1 kHz)
#define MAX_DUTY_CYCLE 255      // Max duty cycle for 8-bit PWM

// Sine wave lookup table
uint8_t sine_wave[SINE_RESOLUTION];

// LEDC PWM Timer configuration
ledc_timer_config_t ledc_timer = {
    .speed_mode = LEDC_HIGH_SPEED_MODE,
    .timer_num = LEDC_TIMER_0,
    .duty_resolution = LEDC_TIMER_8_BIT,  // 8-bit resolution (0-255)
    .freq_hz = PWM_FREQUENCY,            // PWM frequency
    .clk_cfg = LEDC_USE_APB_CLK          // Clock source
};

// LEDC PWM Channel configuration
ledc_channel_config_t ledc_channel = {
    .channel = LEDC_CHANNEL_0,
    .duty = 128,  // Set an initial duty cycle of 50%
    .gpio_num = PWM_PIN,
    .speed_mode = LEDC_HIGH_SPEED_MODE,
    .hpoint = 0,
    .timer_sel = LEDC_TIMER_0
};

// Function to generate sine wave lookup table
void generate_sine_wave_table() {
    for (int i = 0; i < SINE_RESOLUTION; i++) {
        sine_wave[i] = (uint8_t)((sin(2 * PI * i / SINE_RESOLUTION) * 127) + 128);  // Scale sine wave (0-255)
    }
}

// Configure PWM on GPIO25 using LEDC
void configure_pwm() {
    // Configure LEDC timer
    ledc_timer_config(&ledc_timer);

    // Configure LEDC PWM channel
    ledc_channel_config(&ledc_channel);
}

// Main application
void app_main(void) {
    // --- Configure GPIO26 as output for software waveform ---
    gpio_config_t io_conf = {
        .pin_bit_mask = (1ULL << SOFTWARE_PIN),
        .mode = GPIO_MODE_OUTPUT,
        .pull_up_en = GPIO_PULLUP_DISABLE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .intr_type = GPIO_INTR_DISABLE
    };
    gpio_config(&io_conf);

    // --- Generate sine wave lookup table ---
    generate_sine_wave_table();

    // --- Configure PWM for GPIO25 ---
    configure_pwm();

    // --- Main loop: Output sine wave on GPIO26 and PWM on GPIO25 ---
    int sine_index = 0;
    while (1) {
        // Output sine wave on GPIO26 based on sine table
        uint8_t sine_value = sine_wave[sine_index];
        gpio_set_level(SOFTWARE_PIN, sine_value > 128 ? 1 : 0);  // Set GPIO high if sine value > 128

        // Increment the sine index for the next sine value
        sine_index = (sine_index + 1) % SINE_RESOLUTION;

        // Output PWM signal on GPIO25 with variable duty cycle
        uint8_t pwm_duty = sine_wave[sine_index];  // PWM duty cycle based on sine wave value
        ledc_set_duty(ledc_channel.speed_mode, ledc_channel.channel, pwm_duty);  // Update PWM duty cycle
        ledc_update_duty(ledc_channel.speed_mode, ledc_channel.channel);  // Commit the duty cycle change

        // Delay to control the frequency of the sine wave output
        vTaskDelay(pdMS_TO_TICKS(SIGNAL_PERIOD_MS / SINE_RESOLUTION));  // Adjust delay for sine wave frequency
    }
}

