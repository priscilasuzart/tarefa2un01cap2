


#define BUZZER_PIN 21 // Define o pino para o buzzer (GPIO 27)

void buzzer_on(){ // Função para ligar o buzzer
   
 

gpio_init(BUZZER_PIN); // Inicializa o pino do buzzer
gpio_set_dir(BUZZER_PIN, GPIO_OUT); // Define o pino do buzzer como saída

    // Loop infinito para ligar o buzzer por 2 segundos e desligar por 1 segundo
    gpio_put(BUZZER_PIN, 1); // Liga o buzzer
    
    sleep_ms(2000); // Aguarda 2 segundos ligado 
    
    

}

void buzzer_off(){ // Função para desligar o buzzer

    gpio_put(BUZZER_PIN, 0); // Desliga o buzzer

}