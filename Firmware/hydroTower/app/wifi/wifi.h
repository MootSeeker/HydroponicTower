
#pragma once 

#include "esp_err.h"
#include "esp_wifi.h"

namespace WIFI
{

    class Wifi
    {
        enum class state_e : int
        {
           NOT_INITIALISED, 
           INITIALISED, 
           WAITING_FOR_CREDENTIALS, 
           READY_TO_CONNECT, 
           CONNECTING, 
           WAITING_FOR_IP, 
           CONNECTED, 
           DISCONNECTED, 
           ERROR 
        }; 


        public: 
            esp_err_t Init( void ); 
            esp_err_t Begin( void ); 

            state_e GetState( void ); 
            const char* GetMac( void ); 

        private:
            void stateMachine( void );  


            char _macAddr_cstr[ 13 ]; 

    }; // End: Wifi class 
} // End: WiFi namespace