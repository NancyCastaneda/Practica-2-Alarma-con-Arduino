#include <LowPower.h>  /*Librería necesaría para el modo sleep (ahorro en el consumo de energia)*/

/*
  ---------------------------------------------
  Alarma con arduino para el acceso a una puerta.
  ---------------------------------------------
  Programa que genera una alarma auditiva con un buzzer, y visual con un LED y un display 
  a partir de un campo magnético generado a un reed switch. 
*/

//--------------------------------------------------
//Declara puertos de entradas y salidas y variables
//--------------------------------------------------
int contacto = 2;
//Pin asignado al reed switch
int buzzer = 11;
//Pin asignado al buzzer
int led = 13;
//Pin asignado al LED

//--------------------------------------------------
//Función principal
//--------------------------------------------------

void setup(){  
  // Se ejecuta cada vez que el Arduino se inicia 
  pinMode(contacto, INPUT);
  //El reed switch como una entrada
  pinMode(led, OUTPUT);
  //El LED como una salida   
  pinMode(buzzer, OUTPUT);   
  //El Buzzer como una salida 

  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);  
  pinMode(9, OUTPUT);
  //Pin de 3 al 9 asignados a los segmentos del display
  //cada uno asignado como salida
  
}

//------------------------------------
//Funcion ciclicla
//------------------------------------

void loop() {
  // Esta funcion se mantiene ejecutando 
  // Cuando este energizado el Arduino
  // Si el iman se acerca al reed switch
  if (digitalRead(contacto) == LOW) {    
    sleep(8);
    //Se llama al metodo encargado de ahorrar el consumo de energia lo más posible
    //al rededor de 8 segundos 
    for (int a = 0; a <= 50; a++) {
    //Ciclo for que va de 0 a 50, el contador esta
    //  en la variable a, se repite mientras a sea
    //  menor a o igual 50
      fDisplay(a);
      //Se llama al método encargado de decidir que mostrar en el display
      //de acuerdo al contador
      digitalWrite(led, HIGH);      
      //Prende el LED
      delay(50); 
      //Tiempo de espera
      digitalWrite(led, LOW);
      //Apaga el LED
      delay(50);
      //Tiempo de espera
      analogWrite(buzzer,30); 
      //Emite sonido
    }    
  } 
  // Si el iman esta lejos del reed switch
  else {
    fDisplay(50);
    //Se llama al método encargado de decidir que mostrar en el display
    //de acuerdo al contador
    digitalWrite(led, LOW);
    //Mantiene apagado el LED    
    analogWrite(buzzer,LOW); //emite sonido
  } 
  //Fin del if
}

//------------------------------------
//función void display para establecer los parámetros que van a controlar 
//el encendido de cada LED o segmento del display.
//------------------------------------

void display(int a, int b, int c, int d, int e, int f, int g){
  //7 parametros de entrada para encender o no los segmentos del display
  digitalWrite(3, a);
  //Manda al segmento conectado al pin 3, 1 -> Para enceder, o 0 -> Para apagar
  digitalWrite(4, b);
  //Manda al segmento conectado al pin 4, 1 -> Para enceder, o 0 -> Para apagar
  digitalWrite(5, c);
  //Manda al segmento conectado al pin 5, 1 -> Para enceder, o 0 -> Para apagar
  digitalWrite(6, d);
  //Manda al segmento conectado al pin 6, 1 -> Para enceder, o 0 -> Para apagar
  digitalWrite(7, e);
  //Manda al segmento conectado al pin 7, 1 -> Para enceder, o 0 -> Para apagar
  digitalWrite(8, f);
  //Manda al segmento conectado al pin 8, 1 -> Para enceder, o 0 -> Para apagar
  digitalWrite(9, g);
  //Manda al segmento conectado al pin 9, 1 -> Para enceder, o 0 -> Para apagar
}

//------------------------------------
//Método encargado de decidir que valor mostrar en los segmentos del display
//de acuerdo al valor que recibe como parametro
//------------------------------------

void fDisplay(int segundo){
  if(segundo == 50){
    // Si el valor es completamente igual a 50
    display (1,1,1,1,1,1,0); 
    // Llama a la función display para mostrar en el display un 0
  }
  else if(segundo == 40){
    // Si el valor es completamente igual a 40
    display (0,1,1,0,0,0,0);
    // Llama a la función display para mostrar en el display un 1
  }
  else if(segundo == 30){
    // Si el valor es completamente igual a 30
    display (1,1,0,1,1,0,1);
    // Llama a la función display para mostrar en el display un 2
  }
  else if(segundo == 20){
    // Entra si el valor es completamente igual a 20
    display (1,1,1,1,0,0,1);
    // Llama a la función display para mostrar en el display un 3
  }
  else if(segundo == 10){
    // Si el valor es completamente igual a 10
    display (0,1,1,0,0,1,1);
    // Llama a la función display para mostrar en el display un 4
  }
  else if(segundo == 0){
    // Si el valor es completamente igual a 0
    display (1,0,1,1,0,1,1);
    // Llama a la función display para mostrar en el display un 5
  }
}

//------------------------------------
//Método encargado de ahorrar el consumo de energía
//de acuerdo al valor que recibe como parametro
//------------------------------------

void sleep(int sec) {
    LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);
    //Duerme durante 8 s con el módulo ADC y el módulo BOD desactivados
}
//Fin del programa




