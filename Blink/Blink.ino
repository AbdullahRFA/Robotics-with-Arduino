int green = 13;//Here define 4 pin to blink 4 bulb
int rgb = 10;
int red = 11;
int blue = 12;
void setup() {
  // initialize green,rgb,red,blue as an output.
  pinMode(green, OUTPUT);
  pinMode(rgb, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(green, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(green, LOW);   // turn the LED off by making the voltage LOW
  //delay(10);                      // wait for a second

  digitalWrite(rgb, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(2000);                      // wait for a second
  digitalWrite(rgb, LOW);   // turn the LED off by making the voltage LOW
  //delay(1); 

  digitalWrite(red, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(red, LOW);   // turn the LED off by making the voltage LOW
  //delay(1); 

  digitalWrite(blue, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(blue, LOW);   // turn the LED off by making the voltage LOW
  //delay(1); 
}
