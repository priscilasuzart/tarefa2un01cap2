#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

int i,recebe;

#define LED_VERDE 11
#define LED_AZUL 12
#define LED_VERMELHO 13
#define BUZZER 27

void LED_verde(){
  gpio_init(LED_VERDE);
  gpio_init(LED_AZUL);
  gpio_init(LED_VERMELHO);
  gpio_init(BUZZER);
  gpio_set_dir(LED_VERDE, GPIO_OUT);
  gpio_set_dir(LED_AZUL, GPIO_OUT);
  gpio_set_dir(LED_VERMELHO, GPIO_OUT);
  gpio_set_dir(BUZZER, GPIO_OUT);
  gpio_put(LED_VERDE, 1);
  gpio_put(LED_AZUL, 0);
  gpio_put(LED_VERMELHO, 0);
  gpio_put(BUZZER, 0);
  printf("\nLED Verde ativado");
  sleep_ms(3000);
  break;
}
void funcao_principal(){
    gpio_init(LED_VERDE);
    gpio_init(LED_AZUL);
    gpio_init(LED_VERMELHO);
    gpio_init(BUZZER);
    gpio_set_dir(LED_VERDE, GPIO_OUT);
    gpio_set_dir(LED_AZUL, GPIO_OUT);
    gpio_set_dir(LED_VERMELHO, GPIO_OUT);
    gpio_set_dir(BUZZER, GPIO_OUT);
    printf("O que você deseja ativar?\n1 - LED Verde\n2 - LED Azul\n3 - LED Vermelho\n4 - Liga todos os LEDs\n5 - Desliga todos os LEDs\n6 - Aciona o Buzzer por 2 segundos");
    scanf("%d", &recebe);
    switch(recebe){

      case 1:
        LED_verde();
      case 2:
        gpio_put(LED_VERDE, 0);
        gpio_put(LED_AZUL, 1);
        gpio_put(LED_VERMELHO, 0);
        gpio_put(BUZZER, 0);
        printf("\nLED Azul ativado");
        sleep_ms(3000);
        break;
      case 3:
        gpio_put(LED_VERDE, 0);
        gpio_put(LED_AZUL, 0);
        gpio_put(LED_VERMELHO, 1);
        gpio_put(BUZZER, 0);
        printf("\nLED Vermelho ativado\n");
        sleep_ms(3000);
        break;
      case 4:
        gpio_put(LED_VERDE, 1);
        gpio_put(LED_AZUL, 1);
        gpio_put(LED_VERMELHO, 1);
        gpio_put(BUZZER, 0);
        printf("\nTodos os LEDs foram ligados\n");
        sleep_ms(3000);
        break;

      case 5: 
        gpio_put(LED_VERDE, 0);
        gpio_put(LED_AZUL, 0);
        gpio_put(LED_VERMELHO, 0);
        gpio_put(BUZZER, 1);
        printf("\nTodos os LEDs foram desligados\n");
        sleep_ms(3000);
        break;
      case 6:
        gpio_put(LED_VERDE, 0);
        gpio_put(LED_AZUL, 0);
        gpio_put(LED_VERMELHO, 0);
        gpio_put(BUZZER, 1);
        printf("\nBuzzer ligado\n");
        sleep_ms(2000);
        gpio_put(BUZZER,0);
        printf("\nBuzzer desligado\n");
        sleep_ms(3000);
        break;

    }
}

int main() {
  stdio_init_all();
  while (1) {
    funcao_principal();
  }
}