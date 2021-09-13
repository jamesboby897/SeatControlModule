#define MID 2500
void setup() {
  pinMode(PB12,OUTPUT);
  pinMode(PB13,OUTPUT);
  pinMode(PB14,OUTPUT);
  pinMode(PB15,OUTPUT);
  pinMode(PA6,INPUT_ANALOG);
  pinMode(PA7,INPUT_ANALOG);
}

void loop() {
  //SWITCH 1
  int a,b;
  a=analogRead(PA6);
  b=analogRead(PA7);
  if (a>MID)
  {
    digitalWrite(PB13,LOW);
    digitalWrite(PB12,HIGH);
  }
  else if (a<MID&&a>100)
  {
    digitalWrite(PB12,LOW);
    digitalWrite(PB13,HIGH);
  }
  else if (a<100)
  {
    digitalWrite(PB12,LOW);
    digitalWrite(PB13,LOW);
  }
  //SWITCH 2
  if (b>MID)
  {
    digitalWrite(PB15,LOW);
    digitalWrite(PB14,HIGH);
  }
  else if (b<MID&&b>100)
  {
    digitalWrite(PB14,LOW);
    digitalWrite(PB15,HIGH);
  }
  else if (b<100)
  {
    digitalWrite(PB14,LOW);
    digitalWrite(PB15,LOW);
  }
}
