int val;
int ledPin1 = 11;
int ledPin2 = 10;
int ledPin3 = 9;
int ledPin4 = 6;
int sensorValue = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(ledPin1,OUTPUT);
pinMode(ledPin2,OUTPUT);
pinMode(ledPin3,OUTPUT);
pinMode(ledPin4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(A0);
  Serial.println(val);

if (val<256){
  off();
  analogWrite(ledPin1, val);
}else if (val >= 256 && val <=510){
  off();
  analogWrite(ledPin1,255);
  analogWrite(ledPin1,val);
} else if(val >= 511 && val <=765){
  off();
  analogWrite(ledPin1,255);
  analogWrite(ledPin2,255);
  analogWrite(ledPin3,val);
} else if(val >=766 && val <=1021){
  off();
  analogWrite(ledPin1,255);
  analogWrite(ledPin2,255);
  analogWrite(ledPin3,255);
  analogWrite(ledPin4,val);
}
}
void off(){
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,LOW);
  digitalWrite(ledPin4,LOW);
}
