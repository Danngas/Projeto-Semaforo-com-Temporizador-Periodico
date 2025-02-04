#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

// Definição dos pinos dos LEDs
#define LED_VERMELHO 13
#define LED_AMARELO 12
#define LED_VERDE 11
#define ATRASO_CONTADOR 3000
// Nomes das cores
const char *nomes_cores[] = {"Vermelho", "Amarelo", "Verde"};

// Estados das cores (Vermelho, Amarelo, Verde)
const uint8_t estados_cores[3][3] = {
    {1, 0, 0}, // VERMELHO
    {0, 1, 0}, // AMARELO
    {0, 0, 1}  // VERDE
};

// Estado atual do semáforo
volatile int estado_atual = 0;

// Número de estados possíveis
#define NUM_ESTADOS 3

// Função de callback do temporizador
bool repeating_timer_callback(struct repeating_timer *t)
{
    // Avança para o próximo estado
    estado_atual = (estado_atual + 1) % NUM_ESTADOS;

    // Atualiza os LEDs conforme o estado atual
    gpio_put(LED_VERMELHO, estados_cores[estado_atual][0]);
    gpio_put(LED_AMARELO, estados_cores[estado_atual][1]);
    gpio_put(LED_VERDE, estados_cores[estado_atual][2]);

    // Exibe a cor atual no console
    printf("\nCor %s, Passou 3s", nomes_cores[estado_atual]);

    return true;
}

int main()
{
    // Inicializa a comunicação serial (para printf)
    stdio_init_all();

    // Configuração dos pinos dos LEDs como saída
    gpio_init(LED_VERMELHO);
    gpio_set_dir(LED_VERMELHO, GPIO_OUT);
    gpio_init(LED_AMARELO);
    gpio_set_dir(LED_AMARELO, GPIO_OUT);
    gpio_init(LED_VERDE);
    gpio_set_dir(LED_VERDE, GPIO_OUT);

    // Inicia o semáforo no estado vermelho
    gpio_put(LED_VERMELHO, 1);
    gpio_put(LED_AMARELO, 0);
    gpio_put(LED_VERDE, 0);
    printf("\nCor Vermelho, Início");

    // Configura o temporizador para chamar a função de callback a cada 3 segundos
    struct repeating_timer timer;
    add_repeating_timer_ms(ATRASO_CONTADOR, repeating_timer_callback, NULL, &timer);

    // Loop principal
    while (1)
    {
            while (1)
    {
        sleep_ms(9000);
        printf("\nCompletou 1 Ciclo");
    }
        
    }
}