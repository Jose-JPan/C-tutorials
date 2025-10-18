#include <stdio.h>
#include <math.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/dac.h"
#include "esp_timer.h"

// Define the DAC channel to use (GPIO 25 is DAC_CHANNEL_1)
#define DAC_CHANNEL DAC_CHANNEL_1

// ---- Waveform parameters ----
#define SINE_WAVE_FREQ_HZ 10000 // Target frequency of the sine wave
#define SAMPLE_RATE_HZ 50000   // Number of samples per second
#define NUM_SAMPLES 100        // Number of points in the sine lookup table

// Create a lookup table for one cycle of the sine wave
uint8_t sineLookupTable[NUM_SAMPLES];

// Global variables for the timer callback
volatile int sampleIndex = 0;

// Timer callback function (ISR)
void IRAM_ATTR dac_timer_callback(void* arg) {
    dac_output_voltage(DAC_CHANNEL, sineLookupTable[sampleIndex]);
    sampleIndex = (sampleIndex + 1) % NUM_SAMPLES;
}

// Main function
void app_main(void) {
    // Pre-calculate the sine values for a 0V to 3.3V range
    for (int i = 0; i < NUM_SAMPLES; i++) {
        float angle = (2 * M_PI * i) / NUM_SAMPLES;
        // Scale the standard sine range (-1 to 1) to the 8-bit DAC range (0-255)
        sineLookupTable[i] = (uint8_t)(127.5 * sin(angle) + 127.5);
    }

    // Configure the DAC peripheral
    dac_output_enable(DAC_CHANNEL);

    // Create and start a high-resolution timer
    const esp_timer_create_args_t timer_args = {
        .callback = &dac_timer_callback,
        .name = "dac_timer"
    };
    esp_timer_handle_t timer_handle;
    ESP_ERROR_CHECK(esp_timer_create(&timer_args, &timer_handle));

    // Start the timer with the desired interval in microseconds
    // 1,000,000 microseconds / SAMPLE_RATE_HZ
    ESP_ERROR_CHECK(esp_timer_start_periodic(timer_handle, 1000000 / SAMPLE_RATE_HZ));

    printf("Sine wave generation started on GPIO%d\n", DAC_CHANNEL == DAC_CHANNEL_1 ? 25 : 26);

    // Main program loop
    while (1) {
        // Your main application code runs here
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

