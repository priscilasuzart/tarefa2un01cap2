#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"
#include "hardware/gpio.h"
#include "hardware/uart.h"

 #define LED_VERDE 11
 #define LED_AZUL 12
 #define LED_VERMELHO 13
 #define BUZZER 21

 void LUZBRANCA(){
    gpio_init(LED_VERDE);
    gpio_set_dir(LED_VERDE, GPIO_OUT);
    gpio_init(LED_AZUL);
    gpio_set_dir(LED_AZUL, GPIO_OUT);
    gpio_init(LED_VERMELHO);
    gpio_set_dir(LED_VERMELHO, GPIO_OUT);
    gpio_init(BUZZER);
    gpio_set_dir(BUZZER, GPIO_OUT);
    gpio_put (LED_AZUL, 1); //para ligar o led azul
    gpio_put (LED_VERDE, 1); //para ligar o led verde
    gpio_put (LED_VERMELHO, 1); //para ligar o led vermelho
    gpio_put(BUZZER,0);
    sleep_ms (3000); //tempo que permanecerá ligado
        gpio_put (LED_AZUL, 0); // para desligar o led azul
        gpio_put (LED_VERDE, 0); //para desligar o led verde
        gpio_put (LED_VERMELHO, 0); //para desligar o led vermelho
        gpio_put(BUZZER,0);   

 }
