# Repositorio: Control de LEDs y Reproducción de Melodía "Mujer" con Arduino

Este repositorio contiene un proyecto para controlar una secuencia de LEDs y reproducir una melodía utilizando un Arduino. El proyecto utiliza un botón para activar la reproducción de la canción, y a medida que se reproduce la melodía, los LEDs se encienden en secuencia, sincronizados con las notas de la canción.

## Homenaje a Silvia Pinal

La canción que se reproducirá en este proyecto es "Mujer", tema icónico del programa *Mujer: Casos de la vida real*, el cual fue conducido por la gran actriz y figura del cine mexicano Silvia Pinal. Lamentablemente, Silvia Pinal falleció el 28 de noviembre de 2024, y este proyecto se presenta como un homenaje a su destacada trayectoria en el cine, la televisión y la cultura mexicana.

## Materiales Necesarios
- **1 Arduino Nano**: Para controlar los LEDs, el altavoz y leer el estado del botón.
- **1 Altavoz de 4 ohmios y 2 watts**: Para reproducir la melodía.
- **1 LM386**: Integrado amplificador para aumentar la señal de audio.
- **8 LEDs**: Para visualizar el encendido secuencial de los LEDs mientras suena la melodía.
- **8 Resistores de 220 ohmios**: Para limitar la corriente de los LEDs.
- **1 Resistor de 100 ohmios**: Para el buzzer.
- **4 Capacitores de 10uF**: Para estabilizar las señales.
- **1 Capacitor de 47nF**: Para filtrado.
- **1 Capacitor de 220uF**: Para estabilización de voltaje.
- **1 Pulsador**: Para activar la melodía.
- **Protoboard y cables de conexión**: Para realizar el montaje de los componentes.
- **Fuente de alimentación para Arduino**.

## Contenido del Repositorio
1. **Código Arduino**: El código que permite la reproducción de una melodía y el control de los LEDs mediante el uso de un botón.
2. **Diagrama de Conexiones Físicas**: Un diagrama que muestra cómo conectar los LEDs, el buzzer y el pulsador al Arduino. Sigue este diagrama para realizar las conexiones físicas correctamente.

## Instrucciones de Uso

### Conexiones Físicas:
- Sigue el diagrama de conexiones físicas para conectar los LEDs, el altavoz y el pulsador al Arduino.
- Conecta los LEDs a los pines digitales 12, 11, 10, 9, 8, 7, y 6 del Arduino.
- Conecta el pin positivo del capacitor C1 al pin digital 3 del Arduino.
- Conecta el pulsador al pin digital 2.
- Conecta un resistor de 220 ohmios en serie con cada LED.
- Utiliza los capacitores para mejorar la estabilidad de las señales y del voltaje en el circuito.
- Conecta el LM386 entre el altavoz y el Arduino para amplificar la señal de audio.

### Cargar el Programa en el Arduino:
- Abre el archivo `.ino` con el IDE de Arduino.
- Conecta tu Arduino a la computadora y selecciona el puerto correcto.
- Carga el programa en el Arduino.

### Control del Proyecto:
- Una vez cargado el programa, presiona el botón para activar la melodía.
- Los LEDs se encenderán en secuencia a medida que suena la melodía.
- Puedes ajustar la duración de las notas y la sincronización de los LEDs modificando el código.

## Consejos Adicionales
- **Personalización de la melodía**: Puedes modificar el arreglo `melody[]` para cambiar la canción que se reproduce.
- **Ajuste de la sensibilidad**: Si deseas cambiar el comportamiento de los LEDs o el buzzer, puedes ajustar los valores en el código.
- **Sigue las Instrucciones con Cuidado**: Asegúrate de seguir el diagrama de conexiones y las instrucciones de carga del programa al pie de la letra para evitar problemas.
- **Preguntas y Ayuda**: Si tienes alguna pregunta o necesitas ayuda, no dudes en contactar con los creadores del repositorio.

## Disfruta y Experimenta
Este proyecto es una excelente oportunidad para aprender sobre control de LEDs y reproducción de melodías con Arduino. **La canción "Mujer", que se reproduce en este proyecto, es un homenaje a Silvia Pinal, cuya influencia ha marcado a generaciones de mexicanos.** Disfruta del proceso de construcción y programación de tu proyecto, y diviértete creando una experiencia visual y sonora.

¡Buena suerte y diviértete controlando los LEDs y el buzzer con Arduino!

