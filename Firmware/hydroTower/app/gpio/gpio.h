
#ifndef GPIO_H
#define GPIO_H

#include "driver/gpio.h"



namespace GPIO
{
    class GpioBase
    {
        const gpio_num_t _pin; 
        const bool _inverted_logic = false; 
        const gpio_config_t _cfg; 

        public: 
            constexpr GpioBase( const gpio_num_t pin, 
                        const gpio_config_t& config, 
                        const bool invert = false ) :
                _pin{ pin }, 
                _cfg{ config }, 
                _inverted_logic{ invert }
            {

            }

            [[nodiscared]] esp_err_t init( void ); 

            virtual bool state( void ) = 0;
            virtual esp_err_t set( const bool state) = 0;  
    }; // End: GpioBase class 

    class GpioOutput : public GpioBase
    {
        private: 
            bool _state = false; 

        public: 
            GpioOutput( const gpio_num_t pin, const bool invert );

            esp_err_t init( ); 
            esp_err_t set( const bool state );
            esp_err_t toggle( void ); 

            bool state( void ) { return _state; } 

    }; // End: GpioOutput class 

    class GpioInput : public GpioBase
    {
        bool _state = false; 

        public: 
            GpioInput( const gpio_num_t pin, const bool invert ); 

            esp_err_t init( void ); 

            bool state( void ) { return _state;} 
    }; // End: GpioInput

} // namespace GPIO

#endif // End: GPIO_H