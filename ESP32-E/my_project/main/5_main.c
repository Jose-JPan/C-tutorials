#include <math.h>
#include <stdint.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/dac.h"
#include "esp_rom_sys.h"  // for esp_rom_delay_us()

#define DAC_CHANNEL DAC_CHAN_1  // GPIO26 (formerly DAC_CHANNEL_2)
#define PI 3.14159265
#define SAMPLE_COUNT 64
#define WAVE_FREQ_HZ 50
#define DAC_MAX 255

void app_main(void) {
    dac_output_enable(DAC_CHANNEL);

    uint8_t sine_wave[SAMPLE_COUNT];

    // Precompute scaled sine wave values
    for (int i = 0; i < SAMPLE_COUNT; i++) {
        float angle = 2.0f * PI * i / SAMPLE_COUNT;
        float sine = (sinf(angle) + 1.0f) / 2.0f;  // Normalize to 0–1
        sine_wave[i] = (uint8_t)(sine * DAC_MAX);
    }

    // Calculate delay between samples to get desired frequency
    const float sample_interval_sec = 1.0f / (WAVE_FREQ_HZ * SAMPLE_COUNT);
    const int delay_us = (int)(sample_interval_sec * 1000000);  // Convert to microseconds

    while (1) {
        for (int i = 0; i < SAMPLE_COUNT; i++) {
            dac_output_voltage(DAC_CHANNEL, sine_wave[i]);
            esp_rom_delay_us(delay_us);
        }
    }
}

