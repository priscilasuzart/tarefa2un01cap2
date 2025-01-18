#include <stdio.h>
#include "pico/stdlib.h"


#define BUZZER_PIN 27

void buzzer_on(){

 gpio_init(BUZZER_PIN);
 gpio_set_dir(BUZZER_PIN, GPIO_OUT);

    while(1){
    gpio_put(BUZZER_PIN, 1);
    sleep_ms(2000); 
    gpio_put(BUZZER_PIN, 0);
    sleep_ms(1000);
    }

}