
#include "wifi.h"

#include "esp_mac.h"


namespace WIFI
{

    const char* Wifi::GetMac( void )
    {
        char mac[13]{}; 
        uint8_t mac_byte_buffer[6]{}; 

        const esp_err_t status{esp_efuse_mac_get_default( mac_byte_buffer)}; 

        return mac; 
    }

} // End: WiFi namespace