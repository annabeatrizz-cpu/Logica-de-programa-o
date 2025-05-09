// C++ code
//

void setup()
{
 Serial.begin(9600);
 
 Serial.println("Informe um numero par");  
 while(!Serial.available() ){}//espera o usuario dar enter
 int numero = Serial.parseInt();//guarda o numero digitado pelo ususario  

  if( numero % 2 == 0 ){//verifica se o numero e par
    Serial.println("O numero digitado eh par: " + String(numero));
    
  }
  
  Serial.println();//escreve uma linha vazia
  Serial.println("Obrigado por utilizar o programa PAR");
}


void loop()
{
 Serial.println("") 
  delay(1000); // Wait for 1000 millisecond(s)
}