#include <inttypes.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "driver/ledc.h"

// Software square wave pin
#define SOFTWARE_PIN GPIO_NUM_26

// Hardware PWM pin
#define PWM_PIN GPIO_NUM_25

// Square wave frequency (Hz)
#define SIGNAL_FREQUENCY 1000  // 1 kHz

// Period (in ms)
#define SIGNAL_PERIOD_MS (1000 / SIGNAL_FREQUENCY)

void app_main(void) {
    // --- Configure GPIO26 for software square wave ---
    gpio_config_t io_conf = {
        .pin_bit_mask = (1ULL << SOFTWARE_PIN),
        .mode = GPIO_MODE_OUTPUT,
        .pull_up_en = GPIO_PULLUP_DISABLE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .intr_type = GPIO_INTR_DISABLE
    };
    gpio_config(&io_conf);

    // --- Configure GPIO25 for hardware PWM using LEDC ---
    ledc_timer_config_t ledc_timer = {
        .speed_mode       = LEDC_HIGH_SPEED_MODE,
        .timer_num        = LEDC_TIMER_0,
        .duty_resolution  = LEDC_TIMER_8_BIT,  // 8-bit resolution (0–255)
        .freq_hz          = SIGNAL_FREQUENCY,
        .clk_cfg          = LEDC_USE_APB_CLK 
    };
    ledc_timer_config(&ledc_timer);

    ledc_channel_config_t ledc_channel = {
        .channel    = LEDC_CHANNEL_0,
        .duty       = 128, // 50% duty cycle (128/255)
        .gpio_num   = PWM_PIN,
        .speed_mode = LEDC_HIGH_SPEED_MODE,
        .hpoint     = 0,
        .timer_sel  = LEDC_TIMER_0
    };
    ledc_channel_config(&ledc_channel);

    // --- Main loop: generate software square wave on GPIO26 ---
    while (1) {
        gpio_set_level(SOFTWARE_PIN, 1);
        vTaskDelay(pdMS_TO_TICKS(SIGNAL_PERIOD_MS / 2));

        gpio_set_level(SOFTWARE_PIN, 0);
        vTaskDelay(pdMS_TO_TICKS(SIGNAL_PERIOD_MS / 2));
    }
}

