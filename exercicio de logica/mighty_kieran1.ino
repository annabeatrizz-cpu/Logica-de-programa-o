// C++ code
//

int idade = 0;

void setup()

{
 Serial.begin(9600);
  
 Serial.println(" Bem vindo ao Cinema da Cidade");
 Serial.println();
  
 Serial.println("Digite sua idade: ");
 while( ! Serial.available() );
 idade = Serial.parseInt();
  
  if(idade >= 0 && idade <= 9){
    Serial.println("Apenas filmes Infantis");
  } else if(idade >= 10 && idade < 13) {
    Serial.println("Apenas filmes infantis e infantojuvenis");
  } else if(idade >= 14 && idade < 17) {
    Serial.println("Filmes ate classificaçao 14 anos");
  } else if(idade >= 18 && idade < 59) {
    Serial.println("Todos os tipos de filmes");
  } else if(idade >= 60 && idade <= 119 ) {
    Serial.println("Todos os tipos de filmes + desconto para idosos");
  } else {//idades negativas ou maior que 120
    Serial.println("Idade invalida, verifique os dados");
  }
  Serial.println("Sua idade" + String(idade));
}

void loop()
{
 
}