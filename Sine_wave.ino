// Simple DAC sine wave test on Teensy 3.6

float t = 0.0;
float twopi = 3.141592654 * 2;
float t_variant = 0.00099;  //Se define una frecuencia por defecto a 10 Hz


void setup() {
  Serial.begin(9600); //Define la velocidad de comunicación
  analogWriteResolution(12); //Resolución de salida analógica 
  
}

void loop() {
  
  
  float val = sin(t) * 2048.0 + 2048.0;  //La funcion seno de cada muestra obtenida aplicando un escalamiento a un valor entero
  analogWrite(A22, (int)val);            // Imprime el resultado obtenido de la muestra en el pin analógico
  t = t + t_variant;                     // Siguiente muestra
  if (t > twopi)                         //Si se cumple el periodo, se resetea la variable
  {
    t = 0; 
  }
  
}

void serialEvent() {
  String Menu;
 
   if (Serial.available()) {                
    
   Menu = Serial.readString();                //Leemos el dato disponible en el puerto serial                

    if (Menu == "HOME" || Menu == "home")
    {
      Serial.println("Seleccione una letra (A,B,C,D,E o F) para definir la frecuencia de la onda senoinal:");
      Serial.println("Opcion A: 100 Hz");
      Serial.println("Opcion B: 200 Hz");
      Serial.println("Opcion C: 300 Hz");
      Serial.println("Opcion D: 400 Hz");
      Serial.println("Opcion E: 500 Hz");
      Serial.println("Opcion F: 1 KHz");
    }
    
    else if(Menu == "A" || Menu == "a")
    {
      t_variant = 0.01;                        //Ajusta el factor de incremento de la nueva muestra
      Serial.println("Frecuencia a 100 Hz ");
    }

    else if(Menu == "B" || Menu == "b")
    {
      t_variant = 0.02;                        //Ajusta el factor de incremento de la nueva muestra
      Serial.println("Frecuencia a 200 Hz ");
    }

    else if(Menu == "C" || Menu == "c")
    {
      t_variant = 0.03;                        //Ajusta el factor de incremento de la nueva muestra
      Serial.println("Frecuencia a 300 Hz ");
    }
    else if(Menu == "D" || Menu == "d")
    {
      t_variant = 0.04;                        //Ajusta el factor de incremento de la nueva muestra
      Serial.println("Frecuencia a 400 Hz ");
    }
    else if(Menu == "E" || Menu == "e")
    {
      t_variant = 0.05;                        //Ajusta el factor de incremento de la nueva muestra
      Serial.println("Frecuencia a 500 Hz ");
    }
    else if(Menu == "F" || Menu == "f")
    {
      t_variant = 0.1;                        //Ajusta el factor de incremento de la nueva muestra
      Serial.println("Frecuencia a 1 KHz ");
    }
  }
}
