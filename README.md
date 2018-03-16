# Práctica 2: Alarma con Arduino version 1.0

/******************************************************************************************************************************/

Fecha: 15/Marzo/2018

/******************************************************************************************************************************/

Costo: Gratuito por fines educativos

Para la construcción de la práctica se hizo uso de software libre, tales como:

* Ubuntu 16.04 LTS (S.O).

* Frintzing 0.9.3 (Para la construcción del diagrama).

* Arduino IDE 1.8.5 (Para el código).

Las evidencias se muestran en los mismos archivos añadidos a este repositorio.

/******************************************************************************************************************************/


Práctica 2: Alarma con Arduino para el acceso a una puerta, reduciendo lo más posible el consumo de energia.

En está práctica se ejemplifica y/o simula el funcionamiento de una alarma al acceder a una puerta, en primer lugar la puerta se encuentra cerrada (teniendo el imán alejado), por lo que mostrará un comportamiento como se visualiza en la imagen llamada "Puerta cerrada" contenida en este mismo espacio, al abrirla (acercando el imán), tardará 8 segundos en comenzar su cometido, debido a la función de ahorro de energía, en seguida, se emitirá un sonido producido por el buzzer, asi como el parpadeo de un led, lo que indicará que la puerta se encuentra abierta, en el display se ira mostrando el tiempo restante (5 seg) para que la puerta se vuelava a cerrar (funcionalidad extra), el comportamiento de lo anterior se muestra en las imagenes llamadas "Puerta abierta5", "Puerta abiertaa4", "Puerta abiertaaa3", "Puerta abiertaaaa2", "Puerta abiertaaaaa1", en el orden que aquí se exponen.

El funcionamiento del imán y del reed switch se tomo de esa manera, para simular que el imán al acercarse, es una persona abriendo la puerta.

/******************************************************************************************************************************/

Información de contacto: 

* Autor: Nancy Castañeda 

* Correo: nancycast96@gmail.com

/******************************************************************************************************************************/

Instrucciones: Para la construcción del circuito se añade una imagen llamada "alarma_bb Diagrama.png" con el diagrama para su correcto armado, así como el código necesario para su funcionamiento, listo para cargar en el arduino UNO, el archivo se llama "AlarmaSleep.ino".

/******************************************************************************************************************************/

Materiales:
* 1 Arduino UNO

* 1 Protoboard

* N Cables puente para arduino

* 1 Display 7 segmentos Catodo común

* 1 Reed Switch

* 4 Resistencias de 220 Ω

* 1 Resistencia de 1 KΩ

* 1 Led

* 1 Buzzer
