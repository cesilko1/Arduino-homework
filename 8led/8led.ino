int rychlost = 500;
byte ledky[8] = {2, 3, 4, 5, 6, 7, 8, 9};


void setup() {
  for(byte i=2; i<=9; i++) {
  	pinMode(i, OUTPUT); 
  }
}

void loop() {
  for(byte i=2; i<=9; i++) {
    zhasnout();
    digitalWrite(i, HIGH);
    delay(rychlost);
  }
  
  delay(rychlost);
  
  for(byte i=9; i>=2; i--) {
    zhasnout();
    digitalWrite(i, HIGH);
    delay(rychlost);
  }
}

void zhasnout() {
  for(byte i=2; i<=9; i++) {
    digitalWrite(i, LOW);
  }
}    
