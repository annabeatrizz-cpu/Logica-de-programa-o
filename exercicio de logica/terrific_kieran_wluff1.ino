// Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//Declaraçao de variaveis
int idade = 0;
int idadeMeses = 0;
int idadeDias = 0;
int idadeHoras = 0;
int idadeMinutos = 0;
  
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("Digite sua idade em anos");//mostra mensagem na tela
  while( ! Serial.available() );//espera o usuario dar <Enter>
  idade = Serial.parseInt();//transforma a idade digitada em numero
  
  //Processamento
  idadeMeses = idade * 12;
  idadeDias = idade * 360;
  idadeHoras = idade * 8766;
  idadeMinutos = idade * 525960;
    
  //Saida
  Serial.println("idade em meses: " + String(idadeMeses));//imprime o texto
  Serial.println("idade em dias: " + String(idadeDias));//imprime o texto
  Serial.println("idade em Horas: " + String(idadeHoras));//imprime o texto
  Serial.println("idade em minutos: " + String(idadeMinutos));//imprime o texto
  
  delay(1000);

}
