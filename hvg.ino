int value1;
#define relay 9
const int buzzer = 7; 
void setup()
{
    Serial.begin(9600);
    pinMode(relay, OUTPUT);
    pinMode(buzzer, OUTPUT); 
    digitalWrite(relay, HIGH);
}
void loop()
{
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
  Serial.println(voltage);  
}