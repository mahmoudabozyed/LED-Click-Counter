int green=2;
int yellow=3;
int red=4;
int button=8;
int reading=0;
int count=0;
void setup() {
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(button,INPUT);
}
void loop() {
  reading=digitalRead(button);
  if(reading==HIGH){
    count++;
    if(count==1)
      digitalWrite(red,HIGH);
    else if(count==2)
      digitalWrite(yellow,HIGH);
    else if(count==3){
      digitalWrite(green,HIGH);
    }
    else{
    digitalWrite(red,LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(green,LOW);
    count=0;
    }
    delay(250);
  }
}
