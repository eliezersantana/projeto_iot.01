# Estufa de Hortaliças - Projeto IoT 01 com Arduino

![Image](https://github.com/user-attachments/assets/ff764d77-1e92-4c5f-9d62-b2f7e7e87e10)

Este projeto simula o controle de uma estufa de hortaliças usando um Arduino Uno. Foi desenvolvido no simulador [Tinkercad](https://www.tinkercad.com/).

## Funcionalidades:

✅ Leitura da temperatura via sensor (termistor)  
✅ Acionamento de um ventilador quando a temperatura for **maior ou igual a 30 °C**  
✅ Acionamento de **LED vermelho e buzina** quando a temperatura for **acima de 50 °C**  
✅ Código escrito em linguagem C para Arduino  

## Componentes utilizados:

- Arduino Uno
- Sensor de temperatura (termistor)
- LED vermelho
- Buzzer
- Motor DC (ventilador) + TIP120
- Resistores
- Fonte 5V

## Circuito:

O circuito foi montado no Tinkercad, incluindo o controle do motor com TIP120, LEDs, buzzer e leitura do sensor.

## Como simular:

1. Clique em **"Iniciar Simulação"**
2. Clique no sensor de temperatura para ajustar a temperatura manualmente
3. Observe os acionamentos conforme a temperatura

## Código:

O código está no arquivo `EstufaArduino.ino`.
