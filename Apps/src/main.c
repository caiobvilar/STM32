#include "main.h"
#include "gpio.h"

/**
 * @brief  The application entry point.
 * @retval int
 */
int main(void) {
  HAL_Init();
  MX_GPIO_Init();
  while (1) {
    HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_15);
    HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_14);
    HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_13);
    HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);
    HAL_Delay(100);
  }
  return 0;
}
