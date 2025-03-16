
#ifndef GPIO_H
#define GPIO_H

#include "driver/gpio.h"



namespace GPIO
{
    class GpioBase
    {
        protected:
            const gpio_num_t _pin;  
            const gpio_config_t _cfg;
            const bool _inverted_logic = false; 

        public: 
            gpio_num_t pin( void ) { return _pin; }

            constexpr GpioBase( const gpio_num_t pin, 
                        const gpio_config_t& config, 
                        const bool invert = false ) :
                _pin{ pin }, 
                _cfg{ config }, 
                _inverted_logic{ invert }
            {

            }

            [[nodiscard]] esp_err_t init( void ); 

            virtual bool state( void ) = 0;
            virtual esp_err_t set( const bool state) = 0;  
    }; // End: GpioBase class 

    class GpioOutput : public GpioBase
    {
        private: 
            bool _state = false; 

        public: 
            constexpr GpioOutput( const gpio_num_t pin, const bool invert = false ) :
                GpioBase{ pin, 
                            gpio_config_t
                            {
                                .pin_bit_mask   = static_cast<uint64_t>( 1 ) << pin, 
                                .mode           = GPIO_MODE_OUTPUT, 
                                .pull_up_en     = GPIO_PULLUP_DISABLE, 
                                .pull_down_en   = GPIO_PULLDOWN_ENABLE, 
                                .intr_type      = GPIO_INTR_DISABLE
                            }, 
                            invert }
            {

            }

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