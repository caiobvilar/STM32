
#include "clockandweather.h"

/**
 * @brief  The application entry point.
 * @retval int
 */
int main(void) {
  HAL_Init();
  MX_GPIO_Init();

  time_t current_time;
  uint32_t current_temperature;
  uint8_t current_humidity;
  uint32_t current_pressure;

  while (1) {
    current_time = get_time();
    current_temperature = get_temperature();
    current_humidity = get_humidity();
    current_pressure = get_pressure();
    update_display(current_time, current_temperature, current_pressure,
                   current_humidity);
  }
  return 0;
}

time_t get_time()
{
  time_t result = 0;
  // DO STUFF
  return result;
}

uint32_t get_temperature()
{
  uint32_t curr_temp=0;
  // DO STUFF
  return curr_temp;
}

uint8_t get_humidity()
{
  uint8_t curr_hum = 0;
  // DO STUFF
  return curr_hum;
}

uint32_t get_pressure()
{
  uint32_t curr_press = 0;
  // DO STUFF
  return curr_press;
}


void update_display(time_t current_time, uint32_t current_temperature,
                    uint8_t current_humidity, uint32_t current_pressure)
{

}