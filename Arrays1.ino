/*
 Endre koden slik at tallene som legges inn i arrayen sktives ut i serial monitor
 Legg til i koden slik at gjenomsnitts verdien skrives ut i serial monitor
  */


int lengdeArray = 6;           
int tall[lengdeArray];      
          

void setup() 
  {
    Serial.begin(9600);
  }


void loop() 
{
 
  for (int i = 0; i < lengdeArray; i++) 
    {  
    int val =  analogRead(A0);   
     tall[i] = val;
     delay(1000);
     }



     
}
