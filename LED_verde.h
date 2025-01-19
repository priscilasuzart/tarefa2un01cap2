#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"


void LED_verde(){
  gpio_init(LED_VERDE);
  gpio_init(LED_AZUL);
  gpio_init(LED_VERMELHO);
  gpio_init(BUZZER);
  gpio_set_dir(LED_VERDE, GPIO_OUT);
  gpio_set_dir(LED_AZUL, GPIO_OUT);
  gpio_set_dir(LED_VERMELHO, GPIO_OUT);
  gpio_set_dir(BUZZER, GPIO_OUT);
  gpio_put(LED_VERDE, 1);
  gpio_put(LED_AZUL, 0);
  gpio_put(LED_VERMELHO, 0);
  gpio_put(BUZZER, 0);
  printf("\nLED Verde ativado\n");
  sleep_ms(3000);
  printf("\nLED Verde desativado\n");
}