/* LED Blink, Teensyduino Tutorial #1
   http://www.pjrc.com/teensy/tutorial.html
 
   This example code is in the public domain.
*/

// Teensy 2.0 has the LED on pin 11
// Teensy++ 2.0 has the LED on pin 6
// Teensy 3.x / Teensy LC have the LED on pin 13
const int ledPin_0 = 0;
const int ledPin_1 = 1;
const int ledPin_2 = 2;
const int ledPin_3 = 3;
const int ledPin_4 = 4;
const int ledPin_5 = 5;
const int ledPin_6 = 6;
const int ledPin_7 = 7;
const int ledPin_8 = 8;
const int ledPin_9 = 9;
const int ledPin_10 = 10;
const int ledPin_11 = 11;

// the setup() method runs once, when the sketch starts

void setup() {
  // initialize the digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledPin_0, OUTPUT);
  pinMode(ledPin_1, OUTPUT);
  pinMode(ledPin_2, OUTPUT);
  pinMode(ledPin_3, OUTPUT);
  pinMode(ledPin_4, OUTPUT);
  pinMode(ledPin_5, OUTPUT);
  pinMode(ledPin_6, OUTPUT);
  pinMode(ledPin_7, OUTPUT);
  pinMode(ledPin_8, OUTPUT);
  pinMode(ledPin_9, OUTPUT);
  pinMode(ledPin_10, OUTPUT);
  pinMode(ledPin_11, OUTPUT);
}

// the loop() methor runs over and over again,
// as long as the board has power

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // set the LED on
  digitalWrite(ledPin_0, HIGH);   // set the LED on
  digitalWrite(ledPin_1, HIGH);   // set the LED on
  digitalWrite(ledPin_2, HIGH);   // set the LED on
  digitalWrite(ledPin_3, HIGH);   // set the LED on
  digitalWrite(ledPin_4, HIGH);   // set the LED on
  digitalWrite(ledPin_5, HIGH);   // set the LED on
  digitalWrite(ledPin_6, HIGH);   // set the LED on
  digitalWrite(ledPin_7, HIGH);   // set the LED on
  digitalWrite(ledPin_8, HIGH);   // set the LED on
  digitalWrite(ledPin_9, HIGH);   // set the LED on
  digitalWrite(ledPin_10, HIGH);   // set the LED on
  digitalWrite(ledPin_11, HIGH);   // set the LED on
  delay(100);                  // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // set the LED off
  digitalWrite(ledPin_0, LOW);    // set the LED off
  digitalWrite(ledPin_1, LOW);    // set the LED off
  digitalWrite(ledPin_2, LOW);    // set the LED off
  digitalWrite(ledPin_3, LOW);    // set the LED off
  digitalWrite(ledPin_4, LOW);    // set the LED off
  digitalWrite(ledPin_5, LOW);    // set the LED off
  digitalWrite(ledPin_6, LOW);    // set the LED off
  digitalWrite(ledPin_7, LOW);    // set the LED off
  digitalWrite(ledPin_8, LOW);    // set the LED off
  digitalWrite(ledPin_9, LOW);    // set the LED off
  digitalWrite(ledPin_10, LOW);    // set the LED off
  digitalWrite(ledPin_11, LOW);    // set the LED off
  delay(100);                  // wait for a second
}
