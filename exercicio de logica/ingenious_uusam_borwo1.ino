// C++ code
//
String cor = " ";

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //Entrada
   Serial.println("Digite a cor");//mostra a mensagem na tela
   while( !Serial.available() );//espera o usuario dar <Enter>
   cor = Serial.readString();//
  
   if( cor == "verde" ){//se tornar verdadeiro - losango sim
    Serial.println("Siga");
   } else {
    Serial.println("pare");
   }
   delay(1000); // Wait for 1000 millisecond(s)
     
}