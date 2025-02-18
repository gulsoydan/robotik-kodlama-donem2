void setup() {
   Serial.begin(9600);
   pinMode(2,OUTPUT);
   pinMode(3,OUTPUT);
   pinMode(4,OUTPUT);

}

void loop() {
  int LDR=analogRead(A0);
  Serial.print("LDR=");
  Serial.println(LDR);
  delay(1);
  if(LDR<30){
    
  }

}
