
int ir1=6;
int ir2=7;
int pin1=2;
int pin2=3;
int pin3=4;
int pin4=5;

void setup() {                
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
 // pinMode(13, OUTPUT);     
   pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  //Pin 2 is connected to the output of proximity sensor
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
}

void loop() {
  /*
  if(digitalRead(ir1)==LOW)      //Check the sensor output
  {
    digitalWrite(13, HIGH);   // set the LED on
  }
  else
  {
    digitalWrite(13, LOW);    // set the LED off
  }
  delay(100);              // wait for a second
  */
  if(digitalRead(ir1) == HIGH && digitalRead(ir2)== HIGH)
  {
    //FORWARD
   digitalWrite(pin1,LOW);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  delay(500);

  }
   else if(digitalRead(ir1)==LOW && digitalRead(ir2)==HIGH )
  {
    //360 RIGHT
   digitalWrite(pin1,LOW);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  delay(500);

  }
   else if(digitalRead(ir1)==HIGH && digitalRead(ir2)==LOW )
  {
    //360 left
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  delay(500);

  }
  
}
