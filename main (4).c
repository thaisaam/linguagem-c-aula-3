#include <stdio.h>

int main() {
  //Variaveis
  float peso,altura,imc;

  //Entrada dos dados
  printf("Digite seu peso:");
  scanf("%f",&peso);

  printf("Digite seu altura:");
  scanf("%f",&altura);

  //Calculando o imc
  imc = peso / (altura * altura);

  //Exibir o imc 
  printf("Seu imc é: %.2f\n", imc);

  //Cassificando o seu imc
  if (imc < 18.5) {
    printf("Classificação: Abaixo do peso\n");
  } else if (imc >= 18.5 && imc < 24.9) {
    printf("Classificação: Peso Normal\n");
  } else if (imc >= 25 && imc < 29.9) {
    printf("Cassificação: Sobrepeso\n");
  } else {
    printf("Classificação: Obesidade\n");
  }
  return 0;
}