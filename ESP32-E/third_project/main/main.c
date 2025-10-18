#include <stdio.h>
#include <math.h> // Not strictly needed for the cosine generator, but good practice
#include "freertos/FreeRTOS.h"
#include "freertos/task.h" // Required for vTaskDelay and pdMS_TO_TICKS
#include "driver/dac_cosine.h"
#include "esp_timer.h"
#include "esp_err.h"

// Define the DAC channel to use
#define DAC_CHANNEL DAC_CHAN_0 // Use the modern channel definition

void app_main(void) {
    // --- Configure DAC for cosine wave generation ---
    dac_cosine_config_t cos_cfg = {
        .chan_id = DAC_CHANNEL,
        .freq_hz = 10000,
        .phase = DAC_COSINE_PHASE_0,
        .atten = DAC_COSINE_ATTEN_DB_0,
        .clk_src = DAC_COSINE_CLK_SRC_RTC_FAST,
        .offset = 0,
    };

    // Allocate a new cosine channel and get a handle
    dac_cosine_handle_t cos_handle;
    ESP_ERROR_CHECK(dac_cosine_new_channel(&cos_cfg, &cos_handle));

    // Start the cosine wave generator using the handle
    ESP_ERROR_CHECK(dac_cosine_start(cos_handle));

    printf("Built-in cosine wave generation started on DAC channel %d at 10 kHz\n", DAC_CHANNEL);

    // Main program loop
    while (1) {
        // Your main application code runs here
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

