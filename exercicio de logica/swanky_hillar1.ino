// Faça um programa que receba a medida em centímetros e exiba esse
//número em polegadas. OBS: Uma polegada equivale a 2.54
//centímetros.

float centimetros = 0;
float polegadas = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada
   Serial.println("Digite os centimetros");//mostra a mensagem na tela
   while( !Serial.available() );//espera o usuario dar <Enter>
   centimetros = Serial.parseFloat();//transforma os centimetros em numero 
  
  //Processamento
   polegadas = centimetros / 2.54;
    
  //Saida
   Serial.println("polegadas: " + String(polegadas) );
  
  delay(1000); // Wait for 1000 millisecond(s)
  
}