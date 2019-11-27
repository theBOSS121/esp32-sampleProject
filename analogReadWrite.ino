// Potentiometer is connected to GPIO 34 (Analog ADC1_CH6) 
const int potPin = 15;

// variable for storing the potentiometer value
int potValue = 0;

void setup() {
  Serial.begin(115200);
  delay(1000);

  pinMode(2, OUTPUT);
}

void loop() {
  // Reading potentiometer value
  potValue = analogRead(potPin);
  Serial.println(potValue);
//  analogWrite does not work there is a workaround using ledc
  if(potValue > 2024) {
    digitalWrite(2, HIGH);
  }else {
    digitalWrite(2, LOW); 
  }
  delay(500);  
}
