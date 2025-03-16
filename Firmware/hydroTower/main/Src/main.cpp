#include "main.h"

#define LOG_LEVEL_LOCAL ESP_LOG_VERBOSE
#include "esp_log.h"
#define LOG_TAG "APP_MAIN"

static Main myMain; 

extern "C" void app_main( void )
{

    ESP_ERROR_CHECK( myMain.setup( )); 

    while( pdTRUE )
    {
        myMain.run( ); 
    }
}

esp_err_t Main::setup( )
{
    esp_err_t status = ESP_OK; 

    led.init( ); 
    
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