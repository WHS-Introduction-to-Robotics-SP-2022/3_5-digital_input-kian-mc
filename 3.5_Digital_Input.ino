/*
button on pin 9
red led on 8
green led on 7
*/
int button = 0;
bool toggle = false;

void setup() {
    pinMode(9,INPUT);
    pinMode(8,OUTPUT);
    pinMode(7,OUTPUT);
    Serial.begin(9600);
}

void loop() {
  Serial.println(button);
  button = digitalRead(9);
  if(button == LOW) {
    digitalWrite(8, HIGH);
    digitalWrite(7, LOW);
    
  }else{
      digitalWrite(8, LOW);
      digitalWrite(7, HIGH);
    }
}
