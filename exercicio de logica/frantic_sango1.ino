// C++ code
//
int senha = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println ("digite a senha");//mostra a mensagem na tela
  while( !Serial.available() );//espera o usuario dar <Enter>
  senha= Serial.parseInt();//
  Serial.println("senha: " + String(senha));
  
  if( nota == 1234 ){//se tornar verdadeiro - losango sim
    Serial.println("Aprovado");
  } else {//falso - losango nao
    Serial.println("Reprovado");
  
  
  delay(1000); // Wait for 1000 millisecond(s)
}