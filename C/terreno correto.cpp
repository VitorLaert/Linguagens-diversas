#include <stdio.h>

int main() {
   float largura, comprimento, espacamento, perimetro, arame;
   int qtd_estacas, qtd_fios_arame;

   printf("Digite a largura do terreno em metros: ");
   scanf("%f", &largura);

   printf("Digite o comprimento do terreno em metros: ");
   scanf("%f", &comprimento);

   printf("Digite o espaçamento entre as estacas em metros: ");
   scanf("%f", &espacamento);

   printf("Digite a quantidade de fios de arame: ");
   scanf("%d", &qtd_fios_arame);

   perimetro = 2 * (largura + comprimento);
   qtd_estacas = (int)((perimetro / espacamento) + 1);
   arame = perimetro * qtd_fios_arame;

   printf("\nPERÍMETRO: %.2f metros", perimetro);
   printf("\nQUANTIDADE DE ESTACAS: %d unidades", qtd_estacas);
   printf("\nQUANTIDADE DE ARAME: %.2f metros", arame);

   return 0;
}

