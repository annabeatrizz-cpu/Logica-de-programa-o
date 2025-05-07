// C++ code
//Variaveis

String nome, cargo;
float salario;

void setup()
{
  Serial.begin(9600);
   
}

void loop()
{
  //entrada
  Serial.println("Digite o nome do funcionario");//Imprime uma mensagem na tela
  while(!Serial.available());//pausa o programa ate o usuario teclar (Enter>
  nome = Serial.readString();//guarda o texto digitado na variavel
  
  Serial.println("Digite o cargo do funcionario");//Imprime uma mensagem na tela
  while(!Serial.available());//pausa o programa ate o usuario teclar (Enter>
  cargo = Serial.readString();//guarda o texto digitado na variavel
  
  Serial.println("Digite o salario do funcionario");//Imprime uma mensagem na tela
  while(!Serial.available());//pausa o programa ate o usuario teclar (Enter>
  salario = Serial.parseFloat();//guarda o texto digitado na variavel
 
  //processamento
    //verificar se o funcionario tera aumento
  if(salario < 1000 ){
    //calcular o aumento
   salario = salario + (salario * 0.10);//calcula 10% no salario
  //salario = salario + (salario / 100 * 10);
    //salario = salario * 1.10;
  } 
    //saida 
    
    Serial.println("funcionario: " + nome);//imprimir o nome
    Serial.println("cargo: " + cargo);//imprimir o cargo
    Serial.println("salario: " + String (salario));//imprimir o salario
  
  delay(1000); // Wait for 1000 millisecond(s)
}