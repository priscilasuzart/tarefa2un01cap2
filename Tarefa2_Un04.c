#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"
#include "hardware/gpio.h"
#include "hardware/uart.h"
#include "LED_azul.h"
#include "LED_verde.h"
#include "LED_vermelho.h"
#include "Luz_branca.h"
#include "desligarTresLeds.h"
#include "ligar_buzzer.h"


//Definindo os pinos dos LEDs e buzzer
#define LED_VERDE 11
#define LED_AZUL 12
#define LED_VERMELHO 13
#define BUZZER 21

//Função para controlar os LEDs conforme o comando
void controlar_leds (char comando){
    switch (comando)
    {
    case 'G': //Liga o LED verde
        LED_verde();
        break;

    case 'B': //Liga o LED azul
        LED_azul();
        break;

    case 'R': //Liga o LED vermelho
        LED_vermelho ();
        break;

    case 'W': //Liz os três LEDs (luz branca)
        LUZBRANCA();
        break;

    case 'O': //Desliga todos os LEDs
        desligarTresLeds();
        break;

    default:
    printf("Comando desconhecido.\n");
        break;
    }
}
