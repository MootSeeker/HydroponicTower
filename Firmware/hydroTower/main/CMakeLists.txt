
set(SOURCES ./Src/main.cpp)

idf_component_register(SRCS ${SOURCES}
                    INCLUDE_DIRS . Inc
                    REQUIRES freertos esp_common driver esp_event esp_wifi nvs_flash )