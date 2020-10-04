int irmotionPin = 4; //Pin of IR Motion Sensor (Yellow)
var relayPin = 8; // Pin of Relay Module (Green)

void setup(){
  Serial.begin(960); 
  pinMode( relayPin, INPUT); // Set Pin connected to Relay as an OUTPUT
  digitalWrite(relayPin, HIGH); // Set Pin to LOW to turn Relay OFF
}

void loop(){

  if (digitalRead (irmotionPin) == HIGH) { // If Motion detected 
    digitalWrite(relayPin, HIGH); // Turn Relay ON
    Serial.println("Relay is ON");
    delay(120000);
  }

  digitalWrite(relayPin, LOW); // Turn Relay OFF
  Serial.println("Relay is ON");
  delay(500);
}
