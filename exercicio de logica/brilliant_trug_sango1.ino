// Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.

float polegadas = 0;
float centimetros = 0;


void setup()
{
   Serial.begin(9600);
}

void loop()
{
  //Entrada
   Serial.println("Digite as polegadas");//mostra a mensagem na tela
   while( !Serial.available() );//espera o usuario dar <Enter>
   polegadas = Serial.parseFloat();//transforma os centimetros em numero 
  
  //Processamento
  centimetros = polegadas * 2.54;
    
  //Saida
   Serial.println("centimetros: " + String(centimetros) );
  
  
  delay(1000); // Wait for 1000 millisecond(s)
}