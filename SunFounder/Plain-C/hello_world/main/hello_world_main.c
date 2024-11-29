#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED_PIN GPIO_NUM_26 // GPIO pin for the LED
                            
void app_main(void) {
    // Configure the GPIO pin as output
    gpio_config_t io_conf = {
        .pin_bit_mask = (1ULL << LED_PIN), // Select the GPIO pin
        .mode = GPIO_MODE_OUTPUT,          // Set as output mode
        .pull_up_en = GPIO_PULLUP_DISABLE, // Disable pull-up
        .pull_down_en = GPIO_PULLDOWN_DISABLE, // Disable pull-down
        .intr_type = GPIO_INTR_DISABLE     // Disable interrupts
    };
    gpio_config(&io_conf);

    while (1) {
        gpio_set_level(LED_PIN, 1);  // Turn the LED on
        vTaskDelay(pdMS_TO_TICKS(1000)); // Delay for 1 second

        gpio_set_level(LED_PIN, 0);  // turn the LED on
        vTaskDelay(pdMS_TO_TICKS(1000));  // Delay for 1 second
    }
}
