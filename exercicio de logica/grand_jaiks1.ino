// Faça um programa que receba um número e exiba o seu dobro.

//Declaraçao de variaveis
int numero = 0;
int numeroEmDobro 



void setup()
{
  Serial.begin(9600;
}

void loop()
{
  //Entrada
    Serial.println("Digite um numero");//mostra a mensagem na tela
    while( !Serial.available() );//espera o usuario dar <Enter>
    numero = Serial.parseInt();//transforma o numero digitado em numero
 
 //Processamento
 numero = numero * 2;
  
 //Saida
 Serial.println("numero: " + String(Idade) );//imprime o texto  

}
               