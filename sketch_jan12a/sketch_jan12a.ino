void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  randomSeed(analogRead(A0));
  Serial.println(analogRead(A0));
  Serial.begin(9600);
  Serial.setTimeout(200);
  for (int i = 0; i < 5; i++ ){
    Serial.print(random(1,6));
    Serial.print(" ");
  }
  Serial.println(" ");
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(200);
      digitalWrite(LED_BUILTIN, HIGH);    // turn the LED off by making the voltage LOW
  delay(300);
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(400);
      digitalWrite(LED_BUILTIN, HIGH);    // turn the LED off by making the voltage LOW
  delay(500);
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(600);
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED off by making the voltage LOW
  delay(700);
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(800);
      digitalWrite(LED_BUILTIN, HIGH);    // turn the LED off by making the voltage LOW
  delay(900);
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1500);
      digitalWrite(LED_BUILTIN, LOW); 
}                        
