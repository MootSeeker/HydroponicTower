
#pragma once 

#include "esp_err.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"


#include <mutex>
#include <cstring>

namespace WIFI
{

    class Wifi
    {
        constexpr static const char* ssid{"MyWifiSsid"};
        constexpr static const char* password{"MyWifiPassword"};

        enum class state_e : int
        {
            NOT_INITIALISED,
            INITIALISED,
            READY_TO_CONNECT,
            CONNECTING,
            WAITING_FOR_IP,
            CONNECTED,
            DISCONNECTED,
            ERROR
        }; 


        public: 
            Wifi(void);
            ~Wifi(void)                     = default;
            Wifi(const Wifi&)               = default;
            Wifi(Wifi&&)                    = default;
            Wifi& operator=(const Wifi&)    = default;
            Wifi& operator=(Wifi&&)         = default;

            esp_err_t Init( void ); 
            esp_err_t Begin( void ); 

            constexpr const state_e& GetState( void ) { return _state; } 
            constexpr const char* GetMac( void ) { return _mac_addr_cstr; }

        private:
            static esp_err_t init( void ); 
            static wifi_init_config_t _wifi_init_config; 
            static wifi_config_t _wifi_config; 
            
            void stateMachine( void ); 
            
            static void event_handler( void* arg, esp_event_base_t event_base, int32_t event_id, void* event_data );
            static void wifi_event_handler( void* arg, esp_event_base_t event_base, int32_t event_id, void* event_data );
            static void ip_event_handler( void* arg, esp_event_base_t event_base, int32_t event_id, void* event_data );

            static esp_err_t getMac( void ); 
            static char _mac_addr_cstr[ 13 ]; 

            static std::mutex _init_mutx;    
            static std::mutex _connect_mutx; 
            static std::mutex _state_mutx;   

            static state_e _state;

    }; // End: Wifi class 
} // End: WiFi namespace