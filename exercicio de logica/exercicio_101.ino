// C++ code
//Elabore um programa para cálculo de preços de produtos que solicite o preço
//de compra do produto e o percentual a ser aplicado em cima desse valor para
//a venda. Calcule e exiba o preço de venda do produto. Se o percentual a ser
//aplicado for inferior a 50%, exiba uma mensagem informando ao usuário que o
//produto será vendido com uma margem muito pequena de lucro.

float precoCompra, percentual, precoVenda;

void setup() 
{
   Serial.begin(9600);
}

void loop()
{
  //entrada
 Serial.println("Digite quanto voce pagou no produto");//imprime uma mensagem na tela
 while(!Serial.available());//pausa o programa ate o usuario teclar (Enter>
 precoCompra = Serial.parseFloat();//guarda o texto digitado na variael
  
 Serial.println("Qual o percentual a ser aplicado na venda do produto");//imprime uma mensagem na tela
 while(!Serial.available());//pausa o programa ate o usuario teclar (Enter>
 percentual = Serial.parseFloat();//guarda o texto digitado na variael
  
  //calcula o preço de venda
  precoVenda = precoCompra + (precoCompra / 100 * percentual);
  
  //exibir o preço da venda
  Serial.println("Preco de Venda: " + String (precoVenda));
  
  //verificar se o percentual e menor do que 50
  if(percentual < 0.50){//mostra mensagem apenas se percentual for menos que 50
    Serial.println("O produto sera vendido com sua margem muito pequena de lucro");
  }
  delay(1000); // Wait for 1000 millisecond(s)
}