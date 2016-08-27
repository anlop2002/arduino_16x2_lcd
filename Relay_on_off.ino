int relayD2 = 2;

void setup() {
  Serial.begin(9600);
  pinMode(relayD2,OUTPUT);
}

void loop() {
    digitalWrite(relayD2,LOW);
    delay(3000);
    digitalWrite(relayD2,HIGH);
    delay(3000);
}
