int sensorPin = A0;
int ledPin = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int ledPin4 = 10;
int sensorValue = 0;
void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
  pinMode(ledPin4,OUTPUT);

}

void loop() {
  int threshold1 = 100;
  int threshold2 = 400;
  int threshold3 = 600;
  int threshold4 = 800;
  if(analogRead(sensorPin)>threshold1&&analogRead(sensorPin)<threshold2){
  digitalWrite(ledPin, HIGH);
  } else if(analogRead(sensorPin)>threshold2&&analogRead(sensorPin)<threshold3){
  digitalWrite(ledPin2, HIGH);
  } else if(analogRead(sensorPin)>threshold3&&analogRead(sensorPin)<threshold4){
  digitalWrite(ledPin3, HIGH);
  } else if(analogRead(sensorPin)>threshold4&&analogRead(sensorPin)<900){
  digitalWrite(ledPin4, HIGH);
  }
  if(analogRead(sensorPin)<threshold1){
  digitalWrite(ledPin, LOW);
  } else if(analogRead(sensorPin)<threshold2){
  digitalWrite(ledPin2, LOW);
  } else if(analogRead(sensorPin)<threshold3){
  digitalWrite(ledPin3, LOW);
  } else if(analogRead(sensorPin)<threshold4){
  digitalWrite(ledPin4, LOW);
  }
  Serial.println(analogRead(sensorPin));
  
}
