#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware\gpio.h"

#define LED_AZUL 12

void ligar_azul(){
    gpio_init(LED_AZUL);
    gpio_set_dir(LED_AZUL, GPIO_OUT);
    gpio_put(LED_AZUL,1);
}