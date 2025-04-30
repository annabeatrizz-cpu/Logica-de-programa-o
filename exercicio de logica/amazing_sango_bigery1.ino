// C++ code
//
int idade = 0;

void setup()
{
 Serial.begin(9600); 
}

void loop()
{
  //Entrada
   Serial.println("Digite a idade");//mostra a mensagem na tela
   while( !Serial.available() );//espera o usuario dar <Enter>
  idade = Serial.parseInt();//
   Serial.println("Idade: " + String(idade));
  
  if( idade >= 18 ){//se tornar verdadeiro - losango sim
    Serial.println("Maior de idade");
  } else {//falso - losango nao
    Serial.println("Menor de idade");
  }
  
  
  delay(1000); // Wait for 1000 millisecond(s)
}