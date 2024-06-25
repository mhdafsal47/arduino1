// C++ code
//
int LED1=5;
  int BUTTONPIN=4;
    int BUTTONSTATE=0;
void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(BUTTONPIN, INPUT);
}

void loop()
{
  BUTTONSTATE=digitalRead(BUTTONPIN);
  

  if(BUTTONSTATE==HIGH)
  
  { 
   digitalWrite(LED1, HIGH);
  }
  else
  {
    
  digitalWrite(LED1, LOW);
  }
}
