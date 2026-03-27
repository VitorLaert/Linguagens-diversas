#include <stdio.h>
#include <math.h>

int main() {
   int primeiro_termo, ultimo_termo, n_termos;
   double razao;

   printf("Digite o primeiro termo da P.G.: ");
   scanf("%d", &primeiro_termo);

   printf("Digite o último termo da P.G. (digite 0 se não souber): ");
   scanf("%d", &ultimo_termo);

   printf("Digite a quantidade de termos da P.G. (digite 0 se não souber): ");
   scanf("%d", &n_termos);

   // Verifica se não conhecemos a quantidade de termos
   if (n_termos == 0) {
      // Verifica se não conhecemos o último termo
      if (ultimo_termo == 0) {
         printf("Não é possível calcular a P.G. sem saber a quantidade de termos e o último termo.\n");
         return 0;
      }

      printf("Digite a razão da P.G.: ");
      scanf("%lf", &razao);

      // Calcula a quantidade de termos a partir do último termo e da razão
      n_termos = log10(ultimo_termo / (double)primeiro_termo) / log10(razao) + 1;
   }
   else {
      // Verifica se não conhecemos o último termo
      if (ultimo_termo == 0) {
         printf("Digite a razão da P.G.: ");
         scanf("%lf", &razao);

         // Calcula o último termo a partir da razão e da quantidade de termos
         ultimo_termo = primeiro_termo * pow(razao, n_termos-1);
      }
      else {
         // Calcula a razão a partir do primeiro e do último termo
         razao = pow((double)ultimo_termo / (double)primeiro_termo, 1.0 / (n_termos-1));
      }
   }

   printf("Termos da P.G.: ");

   // Imprime os termos da P.G.
   int i;
   for (i = 0; i < n_termos; i++) {
      printf("%lld ", (long long int)(primeiro_termo * pow(razao, i)));
   }

   printf("\n");

   // Calcula a soma dos termos da P.G.
   double soma = (primeiro_termo * (pow(razao, n_termos) - 1)) / (razao - 1);

   printf("A soma dos termos da P.G. é %.2lf.\n", soma);

   return 0;
}

