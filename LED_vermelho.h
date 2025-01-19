#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/gpio.h"
#include "hardware/uart.h"

#define LED_VERMELHO 13 
#define LED_AZUL 12
#define LED_VERDE 11
#define BUZZER 21 



// função onde o led vermelho acende e os demais (AZUL e VERDE) desligão
void LED_vermelho (){
gpio_init(LED_VERDE);
gpio_init(LED_AZUL);
gpio_init(LED_VERMELHO);
gpio_init(BUZZER);
gpio_set_dir(LED_VERDE, GPIO_OUT);
gpio_set_dir(LED_AZUL, GPIO_OUT);
gpio_set_dir(LED_VERMELHO, GPIO_OUT);
gpio_set_dir(BUZZER, GPIO_OUT);
gpio_put(LED_VERDE, 0);
gpio_put(LED_AZUL, 0);
gpio_put(LED_VERMELHO, 1);
gpio_put(BUZZER, 0);
printf("\nLED Vermelho ativado\n");
sleep_ms(3000);
printf("\nLED Vermelho desativado\n");

}