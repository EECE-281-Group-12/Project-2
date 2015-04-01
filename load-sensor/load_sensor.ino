int fsrAnalogPin = A0; // FSR is connected to analog 0
int fsrReading;      // the analog reading from the FSR resistor divider
int lastReading = 0;
 
void setup(void) {
  Serial.begin(9600);   // We'll send debugging information via the Serial monitor
  pinMode(fsrAnalogPin, INPUT);
}
 
void loop(void) {
  fsrReading = analogRead(fsrAnalogPin);
  
  if(fsrReading < 500 && lastReading > 500){
     Serial.println("No food in bowl!");
  }
  else if(fsrReading >= 500 && lastReading <= 500) {
     Serial.println("Dog has not eaten!");
  }
  
  Serial.print("Analog reading = ");
  Serial.println(fsrReading);
  lastReading = fsrReading;
  
  delay(1500);
}
