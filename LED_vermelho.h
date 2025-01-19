#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware\gpio.h"

#define LED_VERMELHO 13

void ligar_vermelho(){
    gpio_init(LED_VERMELHO);
    gpio_set_dir(LED_VERMELHO, GPIO_OUT);
    gpio_put(LED_VERMELHO,1);
}