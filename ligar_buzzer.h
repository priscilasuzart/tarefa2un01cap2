#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"
#include "hardware/gpio.h"
#include "hardware/uart.h"


#define BUZZER_PIN 21 // Define o pino para o buzzer (GPIO 21)

void buzzer_on(){ // Função para ligar o buzzer
   
 

 gpio_init(BUZZER_PIN); // Inicializa o pino do buzzer
 gpio_set_dir(BUZZER_PIN, GPIO_OUT); // Define o pino do buzzer como saída

   
    gpio_put(BUZZER_PIN, 1); // Liga o buzzer 
    sleep_ms(2000); // Aguarda 2 segundos ligado 
    gpio_put(BUZZER_PIN, 0); // Desliga o buzzer
   
       }

