#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(main);

#define SLEEP_TIME_MS 1000

int main(void)
{
    while (1) {
        LOG_INF("Hello from Zephyr");
        k_msleep(SLEEP_TIME_MS);
    }
}
