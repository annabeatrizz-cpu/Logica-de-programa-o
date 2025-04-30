// C++ code
//variaveis 
int idade = 0;
 
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //Entrada
   Serial.println("Digite sua idade");//mostra a mensagem na tela
   while( !Serial.available() );//espera o usuario dar <Enter>
   idade = Serial.parseInt();//transforma a idade em numero 
   Serial.println("Idade: " + String(idade));
  
  if( idade >= 16 ){//se tornar verdadeiro - losango sim
    Serial.println("Voto obrigatorio");
  } else {//falso - losango nao
    Serial.println("sem idade para votar");
  }
  
  delay(1000); // Wait for 1000 millisecond(s)
}