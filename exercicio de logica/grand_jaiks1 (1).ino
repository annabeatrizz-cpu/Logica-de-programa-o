// Faça um programa que receba um número e exiba o seu dobro.

//Declaraçao de variaveis
int numero = 0;
int numeroEmDobro = 0;



void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada
    Serial.println("Digite um numero");//mostra a mensagem na tela
    while( !Serial.available() );//espera o usuario dar <Enter>
    numero = Serial.parseInt();
 
 //Processamento
 numeroEmDobro = numero * 2;
  
 //Saida
 Serial.println("Dobro do numero: " + String(numeroEmDobro) );//imprime o texto  
 
  delay (1000);
}
               