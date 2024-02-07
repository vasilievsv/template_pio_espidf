// @file main.c

#include <soc/rtc.h>
#include <hal/wdt_hal.h>

#include <esp_task_wdt.h>
#include <esp_system.h>
#include <esp_event.h>

#include <esp_timer.h>
#include <esp_vfs_fat.h>
#include <esp_err.h>

#include <inttypes.h>
#include <stdio.h>

#include <lwip/err.h>
#include <lwip/sys.h>

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/param.h>

#include <nvs_flash.h>

#include <esp32/rom/uart.h>
#include <driver/gpio.h>
#include <driver/uart.h>
#include <driver/timer.h>

#include "esp_log.h"


/*
-------------------------------------------------------------------------------

    @enter_point

-------------------------------------------------------------------------------
*/
extern void app_main(void)
{
    run:while(true)
    {
        vTaskDelay(10/portTICK_PERIOD_MS);
    }
}