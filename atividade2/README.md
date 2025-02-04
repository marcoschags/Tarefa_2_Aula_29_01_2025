# Insturuções de uso do programa - ATIVIDADE 2

Este programa controla três LEDs (azul, vermelho e verde) conectados a pinos GPIO de uma placa Raspberry Pi Pico. Os LEDs acendem em sequência quando um botão, também conectado a um pino GPIO, é pressionado. Após a sequência, os LEDs são desligados em ordem reversa, com intervalos de 3 segundos entre cada desligamento.

# Componentes Necessários
- 1 Raspberry Pi Pico ou compatível.
- 3 LEDs (azul, vermelho e verde).
- 1 botão de pressão.
- Resistores adequados para os LEDs e o botão.

# Pinos
- LED Azul: Pino GPIO 11.
- LED Vermelho: Pino GPIO 12.
- LED Verde: Pino GPIO 13.
- Botão: Pino GPIO 5 (com resistência pull-up interna ativada).

# Funcionamento do Programa
- Acionamento dos LEDs: Quando o botão (conectado ao pino GPIO 5) é pressionado, todos os LEDs (azul, vermelho e verde) acendem ao mesmo tempo.

## Sequência de Desligamento dos LEDs:
- LED Azul é desligado após 3 segundos.
- LED Vermelho é desligado após mais 3 segundos.
- LED Verde é desligado após 3 segundos.

Cada desligamento é realizado com um atraso de 3 segundos, controlado pelos callbacks e alarmes configurados no código.

## Evitar múltiplos acionamentos: 
A variável led_sequence_active garante que a sequência de LEDs só seja acionada uma vez até que todos os LEDs sejam desligados. Ou seja, se o botão for pressionado enquanto a sequência ainda estiver em andamento, nada acontecerá até que a sequência termine.

## Função de Callback
- turn_off_blue_callback(): Desliga o LED azul e inicia a sequência de desligamento para o LED vermelho.
- turn_off_red_callback(): Desliga o LED vermelho e inicia a sequência de desligamento para o LED verde.
- turn_off_green_callback(): Desliga o LED verde e permite que o botão seja pressionado novamente para reiniciar a sequência.
- button_callback(): Aciona a sequência de LEDs quando o botão é pressionado (detectando a transição de borda de alta para baixa no pino do botão).

## Debounce do Botão
A função debounce_button() é utilizada para evitar múltiplos acionamentos rápidos do botão devido a flutuações no sinal elétrico. Ela espera 50 milissegundos após a detecção do pressionamento do botão antes de permitir um novo acionamento.

## Ciclo de Vida do Programa
O programa ficará executando no loop principal (while(1)) aguardando o pressionamento do botão. A sequência de LEDs é acionada a cada vez que o botão é pressionado, e os LEDs são desligados após a sequência.

## Como Usar
- Abra o diretório atividade2 no VSCode.
- Abra o arquivo arquivo.c.
- Compile e execute o programa no Raspberry Pi Pico.
- Conecte os LEDs aos pinos GPIO 11 (verde), 12 (azul) e 13 (vermelho).
- Conecte o botão ao pino GPIO 5, com a resistência pull-up ativada.
- Pressione o botão para ver os LEDs acenderem e apagarem em sequência.

* Projeto no Wokwi.com: https://wokwi.com/projects/421685882547093505

  
 
 
