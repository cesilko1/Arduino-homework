# Dokončete v Tinkercadu a zašlete odkaz ke kontrole - běžící světlo 8x LED

---

Zdrojový kód je v souboru `8led.ino`.

```c++
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
    digitalWrite(i, HIGH); //řádek 14
    delay(rychlost);
  }
  
  delay(rychlost);
  
  for(byte i=9; i>=2; i--) {
    zhasnout();
    digitalWrite(i, HIGH); //řádek 22
    delay(rychlost);
  }
}

void zhasnout() {
  for(byte i=2; i<=9; i++) {
    digitalWrite(i, LOW); //řádek 29
  }
}
```

---

Pokud svítí LEDka ve vašem zapojení při logické `0`, tak je třeba upravit řádky *14* a *22* na `digitalWrite(i, LOW);` a řádek *29* na `digitalWrite(i, HIGH);`.
