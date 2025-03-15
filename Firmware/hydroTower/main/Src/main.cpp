#include "main.h"

#define LOG_LEVEL_LOCAL ESP_LOG_VERBOSE
#include "esp_log.h"
#define LOG_TAG "APP_MAIN"

extern "C" void app_main( void )
{
    while( true )
    {
        ESP_LOGI(LOG_TAG, "Hello World"); 
        vTaskDelay( pdMS_TO_TICKS( 1000 )); 
    }
}