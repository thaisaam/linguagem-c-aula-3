#include <stdio.h>

int main() {
  char nome[50]; // Array para armazenar o nome(string)
  int idade; //Variavel inteira para idade 
  float altura; //Variavel float para altura

  //Entradas do usuario 
  printf("Digite seu nome:");
  fgets(nome, sizeof(nome), stdin); // le  a entrada do usuario
  printf("Digite sua idade");
  scanf("%d", &idade);

  print("Digite sua altura:");
  scanf("%d", &altura);

  //Saida dos dados
  printf("\n--------Dados Informados-------\n");
  printf("Nome: %s", nome);
  printf("Idade: %d anos\n", idade);
  printf("Altura: %.2f metros\n", altura);
  
  return 0;
}