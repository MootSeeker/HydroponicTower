
#include "gpio.h"
#include "esp_err.h"

namespace GPIO
{
    esp_err_t GpioBase::init( )
    {
        esp_err_t state{ESP_OK}; 
        state |= gpio_config( &_cfg ); 
        return state; 
    }

    
}