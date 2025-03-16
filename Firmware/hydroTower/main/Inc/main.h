
#pragma once

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/projdefs.h"

#include "../app/gpio/gpio.h"

class Main final
{
    public: 
        esp_err_t setup( ); 
        void run( ); 

        GPIO::GpioOutput led{ GPIO_NUM_27, true }; 

    private: 

}; 