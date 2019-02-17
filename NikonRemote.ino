// Nikon Remote Emulator by Gough Lui (http://goughlui.com)
// ledPin = IR +
// A0 = IR -
// On github !

int count=0;
int buttonState = 0;
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin,OUTPUT);
  digitalWrite(ledPin,LOW);
}

void loop() {
  // Send code three times, as the clone remote does
  // Delays are tuned to account for overhead of library code.
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
  while(count<3) {
    tone(ledPin,38000);
    delay(2);
    noTone(ledPin);
    delay(28);
    tone(ledPin,38000);
    delayMicroseconds(200);
    noTone(ledPin);
    delayMicroseconds(1500);
    tone(ledPin,38000);
    delayMicroseconds(200);
    noTone(ledPin);
    delayMicroseconds(3300);
    tone(ledPin,38000);
    delayMicroseconds(200);
    noTone(ledPin);
    delayMicroseconds(100);    
    delay(63);    
    count++;  
  }}
  else {
    count=0;
  }
}
