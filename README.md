
1) # Insturuções de uso do programa - ATIVIDADE 01

Este programa foi desenvolvido para controlar um semáforo utilizando LEDs no Raspberry Pi Pico. O semáforo alterna entre os estados vermelho, amarelo e verde a cada 3 segundos, com a utilização de um temporizador periódico. Abaixo estão as instruções de como usar e entender o programa:

## Como Usar:
- Abra o VSCode e abra o diretório atividade1 e o arquivo atividade1.c.
- Conecte a placa BitDogLab ao computador.
- Coloque a placa BitDogLab em modo "bootsel" (segure o botão BOOTSEL enquanto conecta a placa ao computador).
- Compile o código utilizando o ambiente de desenvolvimento do Raspberry Pi Pico (Pico SDK).
- Carregue o código na sua placa Raspberry Pi Pico.
- Monitore o terminal serial. O semáforo começará a funcionar e os LEDs irão alternar a cada 3 segundos, com as mensagens de tempo sendo exibidas no terminal a cada segundo.

* Projeto no Wokwi.com: https://wokwi.com/projects/421688735794925569

2) # Insturuções de uso do programa - ATIVIDADE 2

Este programa controla três LEDs (azul, vermelho e verde) conectados a pinos GPIO de uma placa Raspberry Pi Pico. Os LEDs acendem em sequência quando um botão, também conectado a um pino GPIO, é pressionado. Após a sequência, os LEDs são desligados em ordem reversa, com intervalos de 3 segundos entre cada desligamento.

## Como Usar
- Abra o diretório atividade2 no VSCode.
- Abra o arquivo arquivo.c.
- Compile e execute o programa no Raspberry Pi Pico.
- Conecte os LEDs aos pinos GPIO 11 (verde), 12 (azul) e 13 (vermelho).
- Conecte o botão ao pino GPIO 5, com a resistência pull-up ativada.
- Pressione o botão para ver os LEDs acenderem e apagarem em sequência.

* Projeto no Wokwi.com: https://wokwi.com/projects/421685882547093505


