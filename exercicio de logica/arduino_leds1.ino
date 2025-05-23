
//

int ledVermelho = 13;
int ledAzul = 12;
int ledAmarelo = 11;
int opcao = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  
  do{
    Serial.println("---MENU---");
    Serial.println();
    Serial.println("Digite uma opcao ");
    Serial.println("1- Ligar Led Vermelho");
    Serial.println("2- Desligar Led Vermelho ");
    Serial.println("3- Ligar Led Azul ");
    Serial.println("4- Desligar Led Azul ");
    Serial.println("5- Ligar Led Amarelo ");
    Serial.println("6- Desligar Led Amarelo ");
    Serial.println("7- Ligar Todos os Leds ");
    Serial.println("8- Desligar Todos os Leds ");
    Serial.println("9- Sair");
    while(!Serial.available());
    opcao = Serial.parseInt();
    
    switch(opcao){
    case 1:
      digitalWrite(ledVermelho, HIGH);
      delay(1000);
    break;
      
    case 2:
      digitalWrite(ledVermelho, LOW);
      delay(1000);
    break;
      
    case 3:
     digitalWrite(ledAzul, HIGH);
      delay(1000);
    break;
      
     case 4:
     digitalWrite(ledAzul, LOW);
      delay(1000);
    break;
      
     case 5:
     digitalWrite(ledAmarelo, HIGH);
      delay(1000);
    break;
      
     case 6:
     digitalWrite(ledAmarelo, LOW);
      delay(1000);
    break;
      
    case 7:
      digitalWrite(ledVermelho, HIGH);;
      delay(1000);
      digitalWrite(ledAzul, HIGH);;
      delay(1000);
      digitalWrite(ledAmarelo, HIGH);
      delay(1000);
    break;
    
   case 8:
     digitalWrite(ledVermelho, LOW);
     digitalWrite(ledAzul, LOW);
     digitalWrite(ledAmarelo, LOW);
      delay(1000);
    break;   
      
  case 9:
     Serial.println("Saindo");
    break;   
   
    }
    
  }
  while( opcao <= 9);
}

void loop()
{
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledAzul, HIGH);
  digitalWrite(ledAmarelo, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAzul, LOW);
  digitalWrite(ledAmarelo, LOW);

  delay(500); // Wait for 1000 millisecond(s)
}