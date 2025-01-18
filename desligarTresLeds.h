#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

//Define os pinos dos LEDs RGB
#define LED_VERDE 11
#define LED_AZUL 12
#define LED_VERMELHO 13

//Desliga os três LEDs
void desligarTresLeds(){

    //Inicializa os pinos dos LEDs
    gpio_init(LED_VERDE);
    gpio_set_dir(LED_VERDE, GPIO_OUT);
    gpio_init(LED_AZUL);
    gpio_set_dir(LED_AZUL, GPIO_OUT);
    gpio_init(LED_VERMELHO);
    gpio_set_dir(LED_VERMELHO, GPIO_OUT);

    //Desliga os LEDs
    gpio_put(LED_VERDE, 0);
    gpio_put(LED_AZUL, 0);
    gpio_put(LED_VERMELHO, 0);
}
