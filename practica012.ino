
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

/* 
o  premer commnt
cando o LED 12 está aceso, a lámpada está acesa,  
*/
/*o rele es do tipo relé SPDT
*/



void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
