// C++ code
//
int tabuadaEscolhida;
int resultado;

void setup()
{
  Serial.begin(9600); 

 Serial.println("Escolha uma tabuada de 1-100: ");
 while(! Serial.available()){}
 tabuadaEscolhida = Serial.parseInt();

 for(int contador = 1; contador <= 10; contador++){
  resultado = tabuadaEscolhida * contador;
  Serial.println(String(tabuadaEscolhida) + " X " + String(contador) + " = " + String(resultado));
 }
}

void loop()

{
}