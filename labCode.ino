int wiperPin = A0;
int resVal = 0, red1 = 11, yellow1 = 10, yellow2 = 9, yellow3 = 6 ,red2 = 5;

void setup() {
  pinMode(wiperPin, INPUT);
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(yellow3, OUTPUT);;

  Serial.begin(9600);
}

void loop() {

  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  resVal= analogRead(wiperPin);

 if(resVal < 204) 
 {
  digitalWrite(red1, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(yellow3, LOW);
  digitalWrite(red2, LOW);
 }
 else if(resVal > 204 && resVal < 408) 
 {
  digitalWrite(red1, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite(yellow3, LOW);
  digitalWrite(red2, LOW);
 }
  else if(resVal > 408 && resVal < 612) 
 {
  digitalWrite(red1, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, HIGH);
  digitalWrite(yellow3, LOW);
  digitalWrite(red2, LOW);
 }
  else if(resVal > 612 && resVal < 816) 
 {
  digitalWrite(red1, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(yellow3, HIGH);
  digitalWrite(red2, LOW);
 }
 else  
 {
  digitalWrite(red1, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(yellow3, LOW);
  digitalWrite(red2, HIGH);
 }
}
