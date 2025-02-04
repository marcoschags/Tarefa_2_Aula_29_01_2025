# Insturuções de uso do programa - ATIVIDADE 01

Este programa foi desenvolvido para controlar um semáforo utilizando LEDs no Raspberry Pi Pico. O semáforo alterna entre os estados vermelho, amarelo e verde a cada 3 segundos, com a utilização de um temporizador periódico. Abaixo estão as instruções de como usar e entender o programa:

# Requisitos:
- Placa Raspberry Pi Pico ou compatível (BitDogLab).
- LEDs conectados aos pinos GPIO 11 (vermelho), GPIO 12 (amarelo) e GPIO 13 (verde) - (BitDogLab)..
- Ambiente de desenvolvimento C configurado para compilar para o Raspberry Pi Pico (como o Pico SDK).

# Descrição do Código:

## Definição dos GPIOs:
- Os LEDs são conectados aos pinos GPIO 11, 12 e 13.
- O pino GPIO 11 é para o LED vermelho, GPIO 12 para o LED amarelo, e GPIO 13 para o LED verde.

## Função de Call-Back (semaforo_callback):
- O temporizador chama essa função a cada 3 segundos.
- Todos os LEDs são desligados a cada ciclo, e então o LED 

## correspondente ao estado do semáforo é aceso:
- Estado 0: LED vermelho aceso.
- Estado 1: LED amarelo aceso.
- Estado 2: LED verde aceso.

## Função Principal (main):
- Inicializa a comunicação serial e configura os pinos GPIO dos LEDs como saída.
- Um temporizador é configurado para chamar a função semaforo_callback a cada 3 segundos.
- O loop principal exibe o tempo decorrido a cada segundo no terminal, mas não interfere na mudança de estados dos LEDs.

## Como Usar:
- Abra o VSCode e abra o diretório atividade1 e o arquivo atividade1.c.
- Conecte a placa BitDogLab ao computador.
- Coloque a placa BitDogLab em modo "bootsel" (segure o botão BOOTSEL enquanto conecta a placa ao computador).
- Compile o código utilizando o ambiente de desenvolvimento do Raspberry Pi Pico (Pico SDK).
- Carregue o código na sua placa Raspberry Pi Pico.
- Monitore o terminal serial. O semáforo começará a funcionar e os LEDs irão alternar a cada 3 segundos, com as mensagens de tempo sendo exibidas no terminal a cada segundo.

## Detalhes Técnicos:
- Temporizador: A função add_repeating_timer_ms chama a função semaforo_callback a cada 3000 ms (3 segundos), atualizando o estado do semáforo.
- Estados do Semáforo: A variável estado_semaforo controla a transição entre os estados de LED (vermelho, amarelo e verde), reiniciando após o estado verde.

Projeto no Wokwi.com: https://wokwi.com/projects/421688735794925569