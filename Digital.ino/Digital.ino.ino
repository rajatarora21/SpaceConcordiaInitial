int ledPin =9;
void setup() {
 
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  
}


void loop() 
{
  // put your main code here, to run repeatedly:
  while(!Serial.available());
  if(Serial.peek()!=-1)
  {
    char input = Serial.read();
    Serial.read();

     if(input=='0')
     {
        digitalWrite(ledPin,LOW); 
     }
     else if(input =='1')
     {
        digitalWrite(ledPin,HIGH); 
     }
    
  }
  

}
