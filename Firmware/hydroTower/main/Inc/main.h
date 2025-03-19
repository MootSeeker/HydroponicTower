
#pragma once

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/projdefs.h"

#include "esp_event.h"
#include "nvs_flash.h"

#include "../app/gpio/gpio.h"
#include "../app/wifi/wifi.h"

class Main final
{
    public: 
        esp_err_t setup( ); 
        void run( ); 

        GPIO::GpioOutput led{ GPIO_NUM_2, true }; 
        WIFI::Wifi wifi;
    private: 

}; 