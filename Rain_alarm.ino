#define BUZZER_PIN 3
void setup(){
  pinMode(BUZZER_PIN,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int sensorvalue=analogRead(A0);
  Serial.println(sensorvalue);
  if(sensorvalue<400){
    digitalWrite(BUZZER_PIN,HIGH);
  }
  else{
    digitalWrite(BUZZER_PIN,LOW);
  }
  delay(1000);
}
