//Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
//salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
//funcionário.

String nome = " ";
String cargo = " ";
float salario = 0;
float novoSalario = 0;


void setup()
{
   Serial.begin(9600);
}

void loop()
{
  //Entrada
   Serial.println("Digite o seu nome");//mostra a mensagem na tela
   while( !Serial.available() );//espera o usuario dar <Enter>
   nome = Serial.readString();//transforma o nome em texto

   Serial.println("Digite o seu cargo");//mostra a mensagem na tela
   while( !Serial.available() );//espera o usuario dar <Enter>
   cargo = Serial.readString();//transforma o cargo em texto 
                  
   Serial.println("Digite o seu salario");//mostra a mensagem na tela
   while( !Serial.available() );//espera o usuario dar <Enter>
   salario = Serial.parseFloat();//
                  
   //Processamento
     (salario = salario * 1.10);
                  
   //Saida
   Serial.println("nome: " + String(nome) );//imprime o texto  
   Serial.println("cargo: " + String(cargo) );//imprime o texto  
   Serial.println("salario: " + String(salario) );//imprime o texto  
   Serial.print("novoSalario: " + String(novoSalario) );//imprime o texto  
   Serial.println(novoSalario, 2);
  
  delay(1000); // Wait for 1000 millisecond(s)
}