/*
While - E uma estrutura de repetiçao que so executa 
quando a condicao for verdadeira
*/
//a funcao SETUP() tem o objetivo de inicializar o sistema, serve 
//como uma configuracao
void setup()
{
  Serial.begin(9600);
  // Variavel inicializadora
  
  int contadorWhile = 1;
  
  while(contadorWhile <=99){
    Serial.println(contadorWhile);
    contadorWhile += 2;
  }
}

//a funcao LOOP() tem como objetivo de repetir varias vezes o programa
void loop()
{
  //sem instrucoes
}