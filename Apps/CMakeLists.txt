# APP #1
add_executable(blinker "src/main.c")

target_link_libraries(blinker stm32cubemx)

# APP #2
add_executable(clocknweather "src/clockandweather.c")
include_directories(clockandweather
    PUBLIC
        inc/
)
target_link_libraries(clocknweather stm32cubemx st7789v)
