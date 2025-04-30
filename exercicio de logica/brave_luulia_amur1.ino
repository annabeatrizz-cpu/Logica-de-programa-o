// C++ code
//
int nota = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada 
  Serial.println ("digite a nota final");//mostra a mensagem na tela
  while( !Serial.available() );//espera o usuario dar <Enter>
  nota = Serial.parseInt();//
  Serial.println("nota: " + String(nota));
  
  if( nota >= 6 ){//se tornar verdadeiro - losango sim
    Serial.println("Aprovado");
  } else {//falso - losango nao
    Serial.println("Reprovado");
  }  
  delay(1000); // Wait for 1000 millisecond(s)
}