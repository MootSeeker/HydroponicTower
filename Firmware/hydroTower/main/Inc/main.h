
#pragma once

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/projdefs.h"

class Main final
{
    public: 
        esp_err_t setup( ); 
        void run( ); 

    private: 

}; 