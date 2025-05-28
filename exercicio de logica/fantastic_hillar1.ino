{
 void desenhaPontinhos(int qtdPontos = 5, int tempo = 700);

 const int buzzer = 0;
 const int ledVermelho = 0;
 const int ledVerde = 0;
 const int vetpalpite =0;
 int vetResultado = 0;

{
 for(int i = 1; i<= qtdPontos; i++)
{
 Serial.print(".");
    delay(tempo);
  }
}


void desenhaCabecalho()
{
  Serial.println(" ");
  Serial.println(" "); 
  Serial.println(" --- PROGRAMA JOGOS DE DADOS ---"); 
  Serial.println(" "); 
  Serial.println(" "); 
}


void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop()
{
   
  
  
 desenhaCabecalho();

{
 Serial.println("Digite um palpite de 1 a 6"); 
 Serial.println(); 
 while(! Serial.available());
 int palpite = Serial.parseInt();


 int numeroSorteado = random(1, 7);
      
 Serial.print("jogando dados ");
   
 desenhaPontinhos();

 Serial.println("seu palpite: " + String(palpite));
 Serial.println("numero do dado: " + String(vetResultado)); 
 Serial.println();
      
 vetpalpite[r] = palpite; 
 vetResultado[i] = numeroSorteado; 
      
  
  if(numeroSorteado == vetResultado){
    digitalWrite(ledVerde, HIGH);
    delay(700);
    digitalWrite(ledVerde, LOW);
   } else {
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledVermelho, HIGH);
    delay(700);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(buzzer, LOW);
} 


  Serial.println("-------------------------");
  Serial.println();

 }

  delay(1000);
}