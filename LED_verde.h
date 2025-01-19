#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware\gpio.h"

#define LED_VERDE 11

void ligar_verde(){
    gpio_init(LED_VERDE);
    gpio_set_dir(LED_VERDE, GPIO_OUT);
    gpio_put(LED_VERDE,1);
}