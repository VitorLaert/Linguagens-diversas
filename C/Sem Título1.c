#include <stdio.h>

int main() {
  int num1, num2, resultado;

  printf("Insira o primeiro número inteiro: ");
  scanf("%d", &num1);

  printf("Insira o segundo número inteiro: ");
  scanf("%d", &num2);

  resultado = (num1 + num2);

  printf("A soma dos números é: %d\n", resultado);

  return 0;
}

