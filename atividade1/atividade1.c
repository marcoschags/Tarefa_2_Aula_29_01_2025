#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "pico/time.h" // Para funções de tempo

// Definição dos GPIOs para os LEDs
#define LED_VERMELHO 11
#define LED_AMARELO 12
#define LED_VERDE 13

// Variável para rastrear o estado do semáforo (0=vermelho, 1=amarelo, 2=verde)
int estado_semaforo = 0;

// Função de call-back para o temporizador periódico
bool semaforo_callback(struct repeating_timer *t) {
    // Desliga todos os LEDs
    gpio_put(LED_VERMELHO, 0);
    gpio_put(LED_AMARELO, 0);
    gpio_put(LED_VERDE, 0);

    // Atualiza o estado do semáforo
    if (estado_semaforo == 0) {
        gpio_put(LED_VERMELHO, 1);
        estado_semaforo = 1;
    } else if (estado_semaforo == 1) {
        gpio_put(LED_AMARELO, 1);
        estado_semaforo = 2;
    } else {
        gpio_put(LED_VERDE, 1);
        estado_semaforo = 0;
    }

    return true;
}

int main() {
    stdio_init_all(); // Inicializa a porta serial
    printf("Semáforo iniciado\n");

    // Inicializa os GPIOs dos LEDs como saída
    gpio_init(LED_VERMELHO);
    gpio_set_dir(LED_VERMELHO, GPIO_OUT);
    gpio_init(LED_AMARELO);
    gpio_set_dir(LED_AMARELO, GPIO_OUT);
    gpio_init(LED_VERDE);
    gpio_set_dir(LED_VERDE, GPIO_OUT);

    struct repeating_timer timer;
    add_repeating_timer_ms(3000, semaforo_callback, NULL, &timer); // Temporizador para o semáforo

    // Loop principal para imprimir mensagens a cada segundo
    while(true) {
        printf("Tempo: %lld ms\n", time_us_64()/1000);
        sleep_ms(1000);
    }

    return 0;
}