// C++ code
//
//Variaveis - escopo de variaveis (global)

void setup()
{
  Serial.begin(9600);
  
  String nome = "Edu Paz";//escopo local so vale dentro de setup
  Serial.println("Nome eh: " + nome);//escreve Eduardo Paz na Serial
  nome = "Bia Paz";//muda o valor da variavel nome para "Bia Paz"
  
}

void loop()
{//funçao que roda eternamente, ate que voce desligue o Arduino
  String nomeDele = "Paulo Vieira";//variavel local dentro do loop
  
  if( nomeDele == "Paulo Vieira" )
  {//estrutura condicional simples
    int idade = 16; // variavel local dentro do if
  }
  
  Serial.println("Nome dele eh: " + nomeDele);//imprime "Paulo Vieira"
  Serial.println("Idade eh: " + String(idade));//da erro,pois a variavel idade nao existe neste escopo
  
  delay(1000); // Wait for 1000 millisecond(s)
}