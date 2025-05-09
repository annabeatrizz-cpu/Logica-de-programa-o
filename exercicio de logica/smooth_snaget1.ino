// C++ code
//

int idade = 0;

void setup()

{
 Serial.begin(9600);
  
 Serial.println("Academia do Davi");
 Serial.println();
  
 Serial.println("Digite sua idade: ");
  while( ! Serial.available() );
  idade = Serial.parseInt();
 //idade = 4 
  if(idade >= 5 && idade < 8){//de 5 ate 7
    Serial.println("Cadastro na categoria Infantil");
  } else if(idade >= 8 && idade < 12) {//de 8 ate 12
    Serial.println("Cadastro na categoria Cadete");
  } else if(idade >= 12 && idade < 15) {//de 12 ate 15
    Serial.println("Cadastro na categoria Juvenil");
  } else if(idade >= 15 && idade < 18) {//de 15 ate 18
    Serial.println("Cadastro na categoria Junior");
  } else if(idade >= 18 ) {//de 8 pra cima
    Serial.println("Cadastro na categoria Adulto");
  } else {//idades abaixo de 5 anos, ou seja, de 4 pra baixo
    Serial.println("Nao pode participar de esportes na academia do Davi");
  }
  Serial.println("Sua idade" + String(idade));
}
void loop()
{
  
  
}