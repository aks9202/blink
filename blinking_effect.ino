//sourced from "Wire up a circuit for digital output" from Scott Fitzgerald: https://www.youtube.com/watch?v=Zyr0IZgtBl0&ab_channel=ScottFitzgerald
const int LEDPin = 2;
void setup() {
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  digitalWrite(LEDPin, HIGH);  
  delay(100);                    
  digitalWrite(LEDPin, LOW);   
  delay(400);                      
}