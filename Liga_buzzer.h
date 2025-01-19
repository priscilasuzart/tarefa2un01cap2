#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware\gpio.h"

#define BUZZER 21

void aciona_buzzer(){
    gpio_init(BUZZER);
    gpio_set_dir(BUZZER, GPIO_OUT);
    gpio_put(BUZZER,1);
    printf("Buzzer acionado por 2 segundos\n");
    sleep_ms(2000);
    gpio_put(BUZZER,0);
    
}