int val = 0;
int metal = A5; //input pin dari relay atau sensor
int metall = 7; //input pin dari relay atau sensor
int metalll = 8; //input pin dari relay atau sensor
//#define buzz 4 //buzzer jika detect metal
//#define Led 2 //buzzer jika detect metal
//#define Led1 3 //buzzer jika detect metal



void setup() {
  Serial.begin(74880);
  pinMode(A5, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
 // pinMode(buzz,OUTPUT);
  //pinMode(Led,OUTPUT);
  //pinMode(Led1,OUTPUT);
 
}

void loop() {

  val = digitalRead(A5);
  
  if (val == 0 ) {
    Serial.println("metal_in");
    //digitalWrite(2,HIGH);
    delay(100);
  }
  else  {
    Serial.println("Nothing");
    //digitalWrite(2,LOW);
    delay(100);
  }

  val = digitalRead(7);
  
  if (val == 0 ) {
    Serial.println("metal_out");
    //digitalWrite(3,HIGH);
    delay(100);
  }
  else  {
    Serial.println("Nothing");
    //digitalWrite(3,LOW);
    delay(100);
  }



  val = digitalRead(8);
  
  if (val == 1 ) {
    Serial.println("Touch");
    //digitalWrite(4,HIGH);
    delay(500);
  }
  else  {
    Serial.println("Nothing");
    //digitalWrite(4,LOW);
    delay(100);
  }
}
