add_library(bme280 STATIC
    Src/bme280.c 
)

target_include_directories(bme280 
    PUBLIC
        Inc/
)

target_link_libraries(bme280 stm32cubemx)