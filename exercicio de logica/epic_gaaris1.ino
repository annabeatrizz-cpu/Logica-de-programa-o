// C++ code
//

void setup(){

Serial.begin(9600); 
Serial.println("Escolha uma tabuada (1-100):");

}

void loop() {
 if (Serial.available() > 0) {
 int numero = Serial.parseInt(); 

if (numero >= 1 && numero <= 100) {
 Serial.print("tabuada do ");
 Serial.println(numero);
 int contador = 1;
 while (contador <= 100) {
 int resultado = numero * contador;
 
 Serial.print(numero);
 Serial.print(" * ");
 Serial.print(contador);
 Serial.print(" = ");
 Serial.println(resultado);
  
 contador++;
 delay(500);
 }

   Serial.println("Digite outro numero (1-100) para tabuada: ");
 } else {
   Serial.println("Numero invalido! Digite um valor entre 1 e 100.");
  }

    
   while (Serial.available() > 0){
   Serial.read();
 }
 }
}