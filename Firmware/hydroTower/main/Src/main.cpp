#include "main.h"

#define LOG_LEVEL_LOCAL ESP_LOG_VERBOSE
#include "esp_log.h"
#define LOG_TAG "APP_MAIN"

#include "esp_event.h"
#include "nvs_flash.h"

static Main myMain; 

extern "C" void app_main( void )
{
    ESP_LOGI(LOG_TAG, "Create default event loop.");
    ESP_ERROR_CHECK( esp_event_loop_create_default( )); 

    ESP_LOGI(LOG_TAG, "Initiailize NVS.");
    ESP_ERROR_CHECK( nvs_flash_init( )); 

    ESP_LOGI(LOG_TAG, "Create Main Application.");
    ESP_ERROR_CHECK( myMain.setup( )); 

    while( pdTRUE )
    {
        myMain.run( ); 
    }
}

esp_err_t Main::setup( )
{
    esp_err_t status = ESP_OK; 

    status |= led.init( );     
    status |= wifi.Init();

    if (ESP_OK == status) status |= wifi.Begin();
    
    return status; 
}

void Main::run( )
{
    ESP_LOGI(LOG_TAG, "Hello World"); 
    led.set( true ); 
    vTaskDelay( pdMS_TO_TICKS( 1000 )); 
    led.set( false ); 
    vTaskDelay( pdMS_TO_TICKS( 1000 )); 
}