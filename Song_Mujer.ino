// Incluye el archivo de cabecera "pitches.h" que contiene las definiciones de las frecuencias de las notas musicales.
#include "pitches.h"

// Define los pines del botón y el buzzer.
#define BUTTON 2
#define BUZZER 3

// Define los pines donde se conectarán los 7 LEDs.
#define LED1 12
#define LED2 11
#define LED3 10
#define LED4 9
#define LED5 8
#define LED6 7
#define LED7 6

// Crea un arreglo que almacena los pines de los LEDs para facilitar su control en el programa.
uint8_t leds[7] = {
  LED1, LED2, LED3, LED4, LED5, LED6, LED7
};

// Define la melodía en forma de notas musicales (frecuencias) utilizando las constantes de "pitches.h".
uint16_t melody[] = {
  NOTE_G5, NOTE_DS5, NOTE_G5, 0,
  NOTE_F5, NOTE_DS5, NOTE_F5,
  NOTE_D5, NOTE_AS4, 0,
  NOTE_GS4, NOTE_AS4, NOTE_C5,
  NOTE_D5, NOTE_DS5, 0,
  NOTE_F5, NOTE_DS5, NOTE_F5,
  NOTE_G5, NOTE_DS5, NOTE_AS4, 0,
  NOTE_GS4, NOTE_C5, 0,
  NOTE_DS5, NOTE_D5, NOTE_F5,
  NOTE_G5, NOTE_AS5, 0,
  NOTE_F5, NOTE_DS5, NOTE_F5,
  NOTE_GS5, 0, NOTE_DS5,
  NOTE_D5, NOTE_DS5, 0
};

// Define la duración relativa de cada nota. Un valor de 4 equivale a una negra, 8 a una corchea, etc.
float notesDurations[] = {
  4, 4, 2, 4,
  8, 8, 4,
  4, 2, 4,
  8, 8, 4,
  4, 2, 4,
  8, 8, 4,
  4, 4, 2, 4,
  2, 2, 4,
  4, 4, 4,
  2, 2, 4,
  4, 4, 2,
  2, 4, 4,
  4, 2, 4
};

// Función para encender un LED correspondiente a la nota actual.
void turnLed(uint16_t thisNote) {

  // Enciende LED1 si la nota es GS4 o GS5, de lo contrario lo apaga.
  if (thisNote == NOTE_GS4 || thisNote == NOTE_GS5) 
    digitalWrite(LED1, HIGH);
  else
    digitalWrite(LED1, LOW);

  // Enciende LED2 si la nota es AS4 o AS5, de lo contrario lo apaga.
  if (thisNote == NOTE_AS4 || thisNote == NOTE_AS5) 
    digitalWrite(LED2, HIGH);
  else
    digitalWrite(LED2, LOW);

  // Enciende LED3 si la nota es C5, de lo contrario lo apaga.
  if (thisNote == NOTE_C5) 
    digitalWrite(LED3, HIGH);
  else
    digitalWrite(LED3, LOW);

  // Enciende LED4 si la nota es DS5, de lo contrario lo apaga.
  if (thisNote == NOTE_DS5)
    digitalWrite(LED4, HIGH);
  else
    digitalWrite(LED4, LOW);

  // Enciende LED5 si la nota es D5, de lo contrario lo apaga.
  if (thisNote == NOTE_D5)
    digitalWrite(LED5, HIGH);
  else
    digitalWrite(LED5, LOW);

  // Enciende LED6 si la nota es F5, de lo contrario lo apaga.
  if (thisNote == NOTE_F5)
    digitalWrite(LED6, HIGH);
  else
    digitalWrite(LED6, LOW);

  // Enciende LED7 si la nota es G5, de lo contrario lo apaga.
  if (thisNote == NOTE_G5)
    digitalWrite(LED7, HIGH);
  else
    digitalWrite(LED7, LOW);
    
}

// Configuración inicial del programa.
void setup() {

  // Configura el buzzer como salida.
  pinMode(BUZZER, OUTPUT);

  // Configura el botón como entrada con resistencia de pull-up.
  pinMode(BUTTON, INPUT_PULLUP);

  // Configura todos los LEDs como salidas.
  for (int i = 0; i < 7; i ++)
    pinMode(leds[i], OUTPUT);

  // Enciende todos los LEDs al inicio.
  for (int i = 0; i < 7; i ++)
    digitalWrite(leds[i], HIGH);
    
}

// Bucle principal que se ejecuta continuamente.
void loop() {

  // Si el botón está presionado (el pin BUTTON está en estado bajo):
  if (digitalRead(BUTTON) == LOW) {

    // Apaga todos los LEDs antes de reproducir la melodía.
    for (int i = 0; i < 7; i ++)
      digitalWrite(leds[i], LOW);

    // Itera a través de todas las notas de la melodía.
    for (int thisNote = 0; thisNote < 41; thisNote ++) {

      // Calcula la duración de la nota en milisegundos.
      float noteDuration = 1000 / notesDurations[thisNote];    

      // Genera la frecuencia de la nota actual en el buzzer durante la duración calculada.
      tone(BUZZER, melody[thisNote], noteDuration);

      // Enciende el LED correspondiente a la nota actual.
      turnLed(melody[thisNote]);

      // Espera un poco más que la duración de la nota para hacer pausas entre notas.
      delay(noteDuration * 1.30);

      // Detiene el buzzer después de cada nota.
      noTone(BUZZER);
      
    }

    // Al finalizar la melodía, enciende nuevamente todos los LEDs.
    for (int i = 0; i < 7; i ++)
      digitalWrite(leds[i], HIGH);
      
  }
  
}
