// C++ code
//

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
 int num1, num2;
 
 
Serial.println("Digite o primeiro numero: ");
while (!Serial.available());
num1 = Serial.parseInt();
       
Serial.println("Digite o segundo numero: ");
while (!Serial.available());
num2 = Serial.parseInt();

if (num1 > num2){
Serial.println("O numero maior e: " + String(num1));
  }
  
  else{
  Serial.println("O numero maior e: " + String(num2));
  } 

}