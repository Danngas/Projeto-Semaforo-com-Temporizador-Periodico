# 🚦 Projeto: Semáforo com Temporizador Periódico  
**(Seu Nome Aqui)**

### [Vídeo Demonstrativo do Projeto](#) *(adicione o link do vídeo aqui, se disponível)*

## 📌 Descrição  

Este projeto implementa um **semáforo controlado por um Raspberry Pi Pico W**, utilizando um temporizador periódico para alternar entre as cores **vermelho, amarelo e verde** a cada **3 segundos**. O objetivo é simular o funcionamento de um semáforo real, com LEDs representando cada cor e resistores para limitar a corrente.  

O projeto foi desenvolvido como parte de uma atividade prática que exigia o uso da função `add_repeating_timer_ms()` do **Pico SDK** para criar um temporizador periódico e controlar a mudança de estados do semáforo.

---

## 🛠️ Componentes Utilizados  

- **Microcontrolador:** Raspberry Pi Pico W  
- **LEDs:**  
  - 1x LED Vermelho  
  - 1x LED Amarelo  
  - 1x LED Verde  
- **Resistores:** 3x Resistores de 330 Ω  
- **Ferramenta de Simulação:** Wokwi  
- **Linguagem de Programação:** C  
- **Frameworks:** Pico SDK  

---

## 🎯 Funcionalidades  

✔️ **Inicialização no vermelho:** O semáforo começa no estado vermelho.  
✔️ **Alternância automática:** A cada 3 segundos, o semáforo muda para a próxima cor (vermelho → amarelo → verde).  
✔️ **Feedback no terminal:** A cada mudança de estado, uma mensagem é exibida no terminal indicando a cor atual.  
✔️ **Simulação no Wokwi:** O projeto pode ser simulado no Wokwi, conforme mostrado no vídeo associado à atividade.  

---

## 📋 Requisitos da Atividade  

1. **Inicialização no vermelho:** O semáforo deve começar no estado vermelho.  
2. **Temporização de 3 segundos:** Cada estado deve durar exatamente 3 segundos.  
3. **Função de callback:** A mudança de estado dos LEDs deve ser implementada na função de callback do temporizador.  
4. **Feedback no terminal:** A cada segundo, uma mensagem deve ser enviada pela porta serial.  
5. **Experimento com LED RGB:** Utilizar o LED RGB da ferramenta BitDogLab para simular o semáforo.  

---

## 🛠️ Estrutura do Código  

O código foi organizado da seguinte forma:  

### 🔹 Arquivo Principal: `main.c`  
- **Inicialização dos pinos:** Configura os pinos dos LEDs como saída.  
- **Temporizador periódico:** Usa a função `add_repeating_timer_ms()` para alternar os estados do semáforo a cada 3 segundos.  
- **Função de callback:** Implementa a lógica de mudança de estado dos LEDs.  
- **Feedback no terminal:** Exibe mensagens no terminal a cada mudança de estado.  

### 🔹 Constantes e Definições  
- **Pinos dos LEDs:**  
  ```c
  #define LED_VERMELHO 13
  #define LED_AMARELO 12
  #define LED_VERDE 11

* Temporização:
 ```c
#define ATRASO_CONTADOR 3000 // 3 segundos
 ```

---

## 🚀 Como Executar o Projeto

### 📌 Requisitos

* Hardware:

    Raspberry Pi Pico W

    3x LEDs (vermelho, amarelo, verde)

    3x Resistores de 330 Ω

    Protoboard e jumpers

* Software:

    Pico SDK instalado e configurado

    Compilador ARM GCC

    Ferramenta CMake


### 🚀 Passos para Compilação e Upload  

1. **Clonar o repositório**  
   ```sh
    git clone https://github.com/Danngas/Projeto-Semaforo-com-Temporizador-Periodico.git
    cd semaforo-pico


2. **Configurar e compilar o projeto**  

``mkdir build && cd build``
``cmake ..``
``make``

3. **Transferir o firmware para a placa**

Conectar a placa BitDogLab ao computador
Copiar o arquivo .uf2 gerado para o drive da placa
4. **Testar o projeto**


## 📜 Licença  

Este projeto está sob a licença MIT. Sinta-se à vontade para utilizá-lo e modificá-lo conforme necessário.  
