int sensor = A0;
int led = 9;
void setup() 
{
 pinMode(sensor, INPUT);
 pinMode(led, OUTPUT);
}
void loop() 
{
  int sensorValue = analogRead(sensor);
  if( sensorValue <= 50 )  
  {
    digitalWrite(led, HIGH);
    Serial.print("LED ON ");
    Serial.println(sensorValue);
    delay(100);
  }
else
  {
   digitalWrite(led, LOW);
   Serial.println("LED OFF");
  }
} 
