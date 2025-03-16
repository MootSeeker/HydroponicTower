
#include "gpio.h"
#include "esp_err.h"

namespace GPIO
{
    [[nodiscard]] esp_err_t GpioBase::init( void )
    {
        esp_err_t state{ESP_OK}; 
        state |= gpio_config( &_cfg ); 
        return state; 
    }

    [[nodiscard]] esp_err_t GpioOutput::init( void )
    {
        esp_err_t state{GpioBase::init( )}; 

        if( ESP_OK == state )
            state |= set( _inverted_logic ); 

        return state; 
    }

    esp_err_t GpioOutput::set( const bool state )
    {
        _state = state; 
        return gpio_set_level( _pin, _inverted_logic ? !state : state ); 
    }

    esp_err_t GpioOutput::toggle( void )
    {
        _state = !_state; 
        return gpio_set_level( _pin, _state ); 
    }

}