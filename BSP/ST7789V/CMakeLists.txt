
add_library(st7789v STATIC
    Src/ST7789V.c
)

target_include_directories(st7789v 
    PUBLIC
        Inc/
)
target_link_libraries(st7789v stm32cubemx)