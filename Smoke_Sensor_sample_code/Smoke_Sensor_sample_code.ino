/*
  e-Gizmo Smoke Sensor HIS-07 Sample code
  
  This sample sketch is for displaying the output
  of Smoke sensor kit using Serial Monitor and
  the output 0 = detected, 1 = no detection.
  
  Wiring connections:
  ===================
  gizDuino  --->  Smoke sensor
  Ground    --->  Ground GND
  D12       --->  Output ---> pull up resistor 20K ---> +9V DC
  VIN or +9V adaptor ---> 9V
    
  Codes by
  e-Gizmo Mechatronix Central
  http://www.e-gizmo.com
  June 27,2017
  
 */

// Pin assignment
int Smoke_Out = 12;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pin as an input:
  pinMode(Smoke_Out, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin assigment:
  int Output_Val = digitalRead(Smoke_Out);
  // print out the smoke sensor output
  Serial.println(Output_Val);
  delay(1);        // delay in between reads for stability
}



