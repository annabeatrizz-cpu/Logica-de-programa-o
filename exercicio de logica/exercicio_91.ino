// C++ code
//Uma empresa decide dar aumento de 30% aos funcionários cujo salário é
//inferior a 500 reais. Escreva um programa que receba o salário de um
//funcionário e imprima o valor do salário reajustado ou uma mensagem caso o
//funcionário não tenha direito a aumento.

float salario = 0;
float salarioNovo = 0;

void setup()
{
 Serial.begin(9600);
}
void loop()
{
  //entrada
  Serial.println("Digite o salario do funcionario");//Imprime uma mensagem na tela
  while(!Serial.available());//pausa o programa ate o usuario teclar (Enter>
  salario = Serial.parseFloat();//guarda o texto digitado na variavel

  //processamento
    //verificar se o funcionario tera aumento
  if( salario < 500 ){
   salarioNovo = (salario * 1.30);
  Serial.println("o seu salario novo e:" + String(salarioNovo));
  }
  else{
  Serial.println("salario: " + String (salario));//imprimir o salario
  }  
    //saida 
    
  
    delay(1000);
}
