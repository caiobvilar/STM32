#ifndef __CLOCKNWEATHER_H__
#define __CLOCKNWEATHER_H__

#include "gpio.h"
#include "i2c.h"
#include "main.h"
#include "usart.h"
#include <stdint.h>
#include <time.h>
#include "ST7789V.h"

time_t get_time();
uint32_t get_temperature();
uint8_t get_humidity();
uint32_t get_pressure();
void update_display(time_t current_time, uint32_t current_temperature,
                    uint8_t current_humidity, uint32_t current_pressure);

#endif // __CLOCKNWEATHER_H__