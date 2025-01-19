#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"


#define BUZZER_PIN 27 // Define o pino para o buzzer (GPIO 27)

void buzzer_on(){ // Função para ligar o buzzer
   
 

 gpio_init(BUZZER_PIN); // Inicializa o pino do buzzer
 gpio_set_dir(BUZZER_PIN, GPIO_OUT); // Define o pino do buzzer como saída

    while(1){ // Loop infinito para ligar o buzzer por 2 segundos e desligar por 1 segundo
    gpio_put(BUZZER_PIN, 1); // Liga o buzzer 
    sleep_ms(2000); // Aguarda 2 segundos ligado 
    gpio_put(BUZZER_PIN, 0); // Desliga o buzzer
    sleep_ms(1000); // Aguarda 1 segundo para repetir o ciclo
    }

}