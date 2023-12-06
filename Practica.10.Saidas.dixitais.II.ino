/*
A partir da montaxe da práctica anterior, engade un
novo LED (coa súa correspondente resistencia en 
serie)que vai ser controlado polo pin 12 do Arduíno.
Engade bloques á programación de maneira que os dous
LEDs encendan e apaguen alternativamente. É dicir, 
cando un dos LEDs está aceso, o outro ten que estar
apagado e viceversa.
*/


// C++ code
//
/*
  leds alternativos
*/

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
}
