int value1;
int count = 0;
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
  if(Serial.available() > 0)       /*check for serial data availability*/
  {
    Serial.print("Reading");
    value1 = Serial.read();
    Serial.print(value1);
    if (value1==1)
    { 
      Serial.print("Unlocking");
      digitalWrite(relay, LOW);
      digitalWrite(buzzer, HIGH); 
      delay(500);        
      digitalWrite(buzzer, LOW); 
      delay(5000);  
      digitalWrite(relay, HIGH);
    }
    else if (value1==0)
    {
      count = count+1;
        digitalWrite(relay, HIGH);
        digitalWrite(buzzer, HIGH);
        delay(5000);        
        digitalWrite(buzzer, LOW);
        Serial.print("Locking");
    }
  }
  
}