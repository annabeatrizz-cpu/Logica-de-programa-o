//Faça um programa que receba o ano de nascimento de uma pessoa e
//o ano atual. Calcule e imprima:
//A idade dessa pessoa
//Essa idade convertida em semana

//Declaraçao de variaveis
int anoDeNascimento = 0;
int anoAtual = 0;
int IdadeSemanas = 0;
int Idade = 0; 
void setup()
{
 Serial.begin(9600);
}

void loop()
{
 //Entrada 
  Serial.println("Digite o ano de nascimento");//mostra mensagem na tela
  while( !Serial.available() );//espera o usuario dar <Enter>   
  anoDeNascimento = Serial.parseInt();//transforma o ano digitado em numero
 
  Serial.println("Digite o ano atual");//mostra a mensagem na tela 
  while( !Serial.available() );//espera o usuario dar <Enter>   
  anoAtual = Serial.parseInt();//transforma o ano digitado em numero
 
 //Processamento
 Idade = anoAtual - anoDeNascimento;
 IdadeSemanas = Idade * 52;
 
  //Saida 
   Serial.println("Idade: " + String(Idade) );//imprime o texto  
   Serial.println("Idade em semanas: " + String(IdadeSemanas) );//imprime o texto  
 
  delay(1000); //Wait for 1000 millisecond(s)
}