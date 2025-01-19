#include <stdio.h>
#include "pico/stdlib.h"
#include "LED_verde.h"
#include "Desliga_todos.h"
#include "LED_azul.h"
#include "LED_vermelho.h"
#include "Luz_branca.h"
#include "Liga_buzzer.h"


#define LED_VERDE 11
#define LED_AZUL 12
#define LED_VERMELHO 13
#define BUZZER 21


int main()
{
    stdio_init_all();
    
    printf("UART GPIO Controller iniciado.\n");
    printf("Comandos:\n");
    printf("v - Ligar LED verde\n");
    printf("a - Ligar LED azul\n");
    printf("r - Ligar LED vermelho\n");
    printf("t - Ligar todos os LEDs\n");
    printf("o - Desligar todos os LEDs\n");
    printf("b - Acionar buzzer por 2 segundos\n");

    while (true) {
        int c = getchar_timeout_us(1000 * 1000);
        if (c != PICO_ERROR_TIMEOUT) {
            switch (c){
                case 'v':
                    desligar_todos();
                    ligar_verde();
                    printf("LED verde ligado.\n");
                    break;
                case 'a':
                    desligar_todos();
                    ligar_azul();
                    printf("LED azul ligado.\n");
                    break;
                case 'r':
                    desligar_todos();
                    ligar_vermelho();
                    printf("LED vermelho ligado.\n");
                    break;

                case 't':
                    desligar_todos();
                    ligar_todos();
                    printf("Todos os LEDs ligados.\n");
                    break;

                case 'o':
                    desligar_todos();
                    printf("Todos os LEDs desligados.\n");
                    break;
                
                case 'b':
                    aciona_buzzer();
                    break;

                       
                default:
                    printf("Comando inválido: %c\n", c);
                break;
            }
        }   
    }
    return 0;
}
