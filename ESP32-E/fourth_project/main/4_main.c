#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/dac.h"

#define DAC_CHANNEL DAC_CHANNEL_2  // GPIO26 → DAC2

void app_main(void) {
    // Enable DAC channel on GPIO26
    dac_output_enable(DAC_CHANNEL);

    uint8_t value = 0;

    while (1) {
        // Output increasing voltage (ramp effect)
        for (value = 0; value < 255; value++) {
            dac_output_voltage(DAC_CHANNEL, value); // Set analog voltage
            vTaskDelay(pdMS_TO_TICKS(10)); // Delay 10ms
        }

        // Optional: Pause at peak
        vTaskDelay(pdMS_TO_TICKS(500));

        // Output decreasing voltage
        for (value = 255; value > 0; value--) {
            dac_output_voltage(DAC_CHANNEL, value);
            vTaskDelay(pdMS_TO_TICKS(10));
        }

        // Optional: Pause at bottom
        vTaskDelay(pdMS_TO_TICKS(500));
    }
}

