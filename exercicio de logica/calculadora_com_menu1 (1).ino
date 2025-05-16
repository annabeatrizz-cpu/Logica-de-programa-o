int escolhaDaOperacao;
float numero1;
float numero2;
float resultado;

float somar(float numero1Param, float numero2Param){
  resultado = numero1Param + numero2Param;
  return resultado;
}  

float dividir(float numero1Param, float numero2Param){
  resultado = numero1Param / numero2Param;
  return resultado;
}
  
float subtrair(float numero1Param, float numero2Param){
  resultado = numero1Param - numero2Param;
  return resultado;
  }
    
float multiplicar(float numero1Param, float numero2Param){
  resultado = numero1Param * numero2Param;
  return resultado;
}
  
 //Serial.println("O resultado da soma foi: " + String(resultado));

  
void setup()
{
 Serial.begin(9600);
   
 int contador = 0;//variavel inicializadora do 'do while'
 float numero1;
 float numero2;
 
  do{
    Serial.println("Bem-Vindo(a) a calculadora inteligente :P!\n");
    Serial.println("Escolha uma das operacoes:");
    Serial.println("1 - Somar");
    Serial.println("2 - Dividir");
    Serial.println("3 - Subtrair");
    Serial.println("4 - Multiplicar");
    while(! Serial.available()){}
    escolhaDaOperacao = Serial.parseInt();



    Serial.println("Para conseguirmos fazer a operacao matematica, precisamos que voce digite dois numeros");
    Serial.println("Digite o primeiro numero");
    while(! Serial.available()){}
    numero1 = Serial.parseFloat();


    Serial.println("Digite o segundo numero");
    while(! Serial.available()){}
    numero2 = Serial.parseFloat();

    switch(escolhaDaOperacao){
      case 1://SOMAR
      //somar(numero1, numero2);
      //somar(1, 3);
      float retornoFuncaoSomar;
      retornoFuncaoSomar = somar(numero1, numero2);
      Serial.println(retornoFuncaoSomar);
      break;

      case 2:
      float retornoFuncaoDividir;
      retornoFuncaoDividir = dividir(numero1, numero2);
      Serial.println(retornoFuncaoDividir);
      break;

      case 3:
      float retornoFuncaoSubtrair;
      retornoFuncaoSubtrair = subtrair(numero1, numero2);
      Serial.println(retornoFuncaoSubtrair);
      break;

      case 4:
      float retornoFuncaoMultiplicacao;
      retornoFuncaoMultiplicacao = multiplicar(numero1, numero2);
      Serial.println(retornoFuncaoMultiplicacao);
      break;

      default:
      Serial.println("Operacao invalida! Escolha uma opcao do 1 ao 4. ;)");
    }


    Serial.println("Voce deseja voltar ao menu? Digite sim ou nao (em minusculo, por favor). ");
    while(! Serial.available()){}


    if(Serial.readString() == "sim"){
      contador = 1;
    }
    else{
      contador = 0;

      Serial.println("Ate Breve!");
      Serial.println("Caso queira voltar o menu, reinicie o programa;)");
    } 
  }
  while(contador != 0);
}

void loop()
{
 //sem instrucoes 
}