#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/logging/log.h>

/* The devicetree node identifier for the "led1" alias. */
#define LED_NODE DT_ALIAS(led0)
static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(LED_NODE, gpios);

LOG_MODULE_REGISTER(main);

#define SLEEP_TIME_MS 1000

int main(void)
{
    if (!gpio_is_ready_dt(&led)) return 0;
    if (gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE) < 0) return 0;

    while (1) {
        if (gpio_pin_toggle_dt(&led) < 0) return 0;

        LOG_INF("Hello from Zephyr");
        k_msleep(SLEEP_TIME_MS);
    }
}
