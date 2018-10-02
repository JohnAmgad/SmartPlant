#define SOILSENSOR 2 // PIN 2 is for soilsensor


void setup() 
{
  Serial.begin(9600);
  pinMode(SOILSENSOR, INPUT); //declares Soil Sensor as input
  pinMode(LED_BUILTIN, OUTPUT); // declare LED as output
}

void loop() 
{
  int valeur_soilsensor = analogRead(A4); // read LDR value
  Serial.println(valeur_soilsensor);
  
 if(valeur_soilsensor<300)
  {
       digitalWrite(LED_BUILTIN,1);  // Turn ON the LED
       delay(6000);
  }
else 
  {
  
       digitalWrite(LED_BUILTIN,0); // Turn OFF the LED
  }
 }
