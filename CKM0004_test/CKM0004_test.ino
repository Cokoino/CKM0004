#define L1 12
#define L2 13
void setup() {
  pinMode(L1,OUTPUT);  // initialize digital pin L1 as an output.
  pinMode(L2,OUTPUT);  // initialize digital pin L2 as an output.
}

void loop() {
  digitalWrite(L1,HIGH);  // turn the LED on
  digitalWrite(L2,HIGH);  // turn the LED on
  delay(5000);            // wait for a second
  digitalWrite(L1,LOW);   // turn the LED off
  digitalWrite(L2,LOW);   // turn the LED off
  delay(5000);            // wait for a second
}
