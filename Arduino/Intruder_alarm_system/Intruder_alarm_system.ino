





























int led = 10;                
int sensor = 8;              
int state = LOW;             
int val = 0;  
int sensitivityThreshold = 10; 
 void setup() {
  pinMode(sensor, INPUT);    
  Serial.begin(96000);       
  pinMode(led, OUTPUT);      
}
void loop(){
  val = digitalRead(sensor);   
  if (val == HIGH) {           
    digitalWrite(led, HIGH);   
    delay(50);                
    
    if (state == LOW) {
      
      state = HIGH;      
    }
  } 
  else {
      digitalWrite(led, LOW); 
      delay(100);              
      
      if (state == HIGH){
        
        state = LOW;
    }
  }
  }
  
