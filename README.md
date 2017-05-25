# Generacion-de-una-onda-senoidal-con-Teensy-3.6-

## Salidas analógicas DAC

Las salidas analógicas son señales de voltaje generadas por el microcontrolador, en donde convierte datos binarios en señales de tensiones analógicas. La tarjeta de desarrollo Teensy 3.6 posee dos salidas analógicas DAC con una resolución de 12 bits, es decir que permite obtener hasta 4096 combinaciones posibles de datos binarios. 

## Librerias matemáticas de ARDUINO 

Contienen un gran numero de funciones matemáticas utiles para la manipulación de numeros de punto flotante. 
A continuación se muestra una lista de las funciones mas comunes:

``cos dobles (doble __x) // devuelve el coseno de x
  FABS dobles (doble __x) // valor absoluto de un flotador
  doble fmod (doble __x, doble __S) // punto modulo flotante
  modf doble (doble __value, doble * __ FPR) // rompe el valor del argumento en partes integrales y fraccionarios
  doble sin (doble __x) // devuelve seno de x
  double sqrt (doble __x) // devuelve la raíz cuadrada de x
  doble tan (doble __x) // devuelve tangente de x
  doble exp (doble __x) // función devuelve el valor exponencial de x.
  doble atan (doble __x) // arco tangente de x
  doble atan2 (doble __S, doble __x) // arco tangente de y / x
  doble log (doble __x) // logaritmo natural de x
  log10 dobles (doble __x) // logaritmo de x a la base 10.
  doble pow (doble __x, doble __S) // x a potencia de y
  cuadrado doble (doble __x) // cuadrada de x>``

El código de programación que se cargara a la tarjeta Teensy 3.6 es `Sine_wave.ino` 

## Resultados obtenidos

En las siguientes figuras se muestra la señal senoidal a diferentes frecuencias:

### Frecuencia a 100 Hz

### Frecuencia a 200 Hz

### Frecuencia a 300 Hz

### Frecuencia a 400 Hz

### Frecuencia a 500 Hz

### Frecuencia a 1 KHz
