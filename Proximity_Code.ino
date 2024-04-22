/*

Code By: *----- ANTOR MONDAL -----*

E-mail: antor.mondal2002@gmail.com

Facebook: https://www.facebook.com/antor31021/
LinkedIn: www.linkedin.com/in/antor-mondal-084764287

N.B: Please do not use this code for business puepose 

*/


#define proximity 7 // define pin 7 for the sensor

void setup() {
  
  Serial.begin(9600);// setup serial monitor to display the result

  pinMode(Proximity, INPUT);// define pin as Input sensor
}

void loop() {
  
  int ProxValue = digitalRead(Proximity);// read the sensor 
  
      if(ProxValue == 0) // 0 means LOW
      {
        Serial.println(" Obstacle Detected ");
      }
     else
     {
       Serial.println(" All Clear ");
     }
  delay(500);
}