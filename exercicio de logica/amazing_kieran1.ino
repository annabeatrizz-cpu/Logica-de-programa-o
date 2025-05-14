// C++ code
//

int nota1 = 0;
int nota2 =0;
int media = 0;
int frequencia = 0;

void setup()
{
  Serial.begin(9600);
  
  Serial.println("Digite a primeira nota:");
  while (! Serial.available() );
  nota1 = Serial.parseInt();
  
  Serial.println("Digite a segunda nota:");
  while (! Serial.available() );
  nota2 = Serial.parseInt();
  
  Serial.println("Digite a frequencia:");
  while (! Serial.available() );
  frequencia = Serial.parseInt();
  
  media = (nota1 + nota2) / 2;
  
  Serial.println ("a media e: " + String(media));
   
  if(media >=6 && frequencia >=75) {
    Serial.println("Aprovado");
  } else if(media < 6 && frequencia >=75) {
  Serial.println("Reprovado por nota");
  } else if(media >=6 && frequencia < 75) {
  Serial.println("Reprovado por frequencia");
  } else if(media < 6 && frequencia < 75) {
  Serial.println("Reprovado");
  } else if(media == 10 && frequencia == 100) 
  Serial.println("Parabens!Nota maxima!");
    
  }
  
  
  
  void loop()
{
   
  
}