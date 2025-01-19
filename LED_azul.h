#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"
#include "hardware/gpio.h"
#include "hardware/uart.h"


#define LED_VERDE 11
#define LED_AZUL 12
#define LED_VERMELHO 13
#define BUZZER 21


void LED_azul(){
  gpio_init(LED_VERDE);
  gpio_init(LED_AZUL);
  gpio_init(LED_VERMELHO);
  gpio_init(BUZZER);
  gpio_set_dir(LED_VERDE, GPIO_OUT);
  gpio_set_dir(LED_AZUL, GPIO_OUT);
  gpio_set_dir(LED_VERMELHO, GPIO_OUT);
  gpio_set_dir(BUZZER, GPIO_OUT);
  gpio_put(LED_VERDE, 0);
  gpio_put(LED_AZUL, 1;
  gpio_put(LED_VERMELHO, 0);
  gpio_put(BUZZER, 0);
  printf("\nLED Azul ativado\n");
  sleep_ms(3000);
  printf("\nLED Azul desativado\n");
}