#include <stdio.h>

int main() {
   int primeiro_termo, razao, n_termos, i, termo_atual;

   printf("Digite o primeiro termo da P.A. (ou 0 para não informar): ");
   scanf("%d", &primeiro_termo);

   printf("Digite a razão da P.A. (ou 0 para não informar): ");
   scanf("%d", &razao);

   printf("Digite a quantidade de termos da P.A. (ou 0 para não informar): ");
   scanf("%d", &n_termos);

   if (primeiro_termo != 0) {
      termo_atual = primeiro_termo;
   } else {
      printf("Informe a quantidade de termos da P.A.: ");
      scanf("%d", &n_termos);

      printf("Informe o valor do último termo da P.A.: ");
      int ultimo_termo;
      scanf("%d", &ultimo_termo);

      printf("Informe o número de termos da P.A. que deseja calcular: ");
      scanf("%d", &n_termos);

      primeiro_termo = ultimo_termo - (n_termos - 1) * razao;
      termo_atual = primeiro_termo;
   }

   if (razao == 0) {
      printf("Informe o valor do primeiro termo da P.A.: ");
      scanf("%d", &primeiro_termo);

      printf("Informe o valor do último termo da P.A.: ");
      int ultimo_termo;
      scanf("%d", &ultimo_termo);

      printf("Informe o número de termos da P.A. que deseja calcular: ");
      scanf("%d", &n_termos);

      razao = (ultimo_termo - primeiro_termo) / (n_termos - 1);
   }

   if (n_termos == 0) {
      printf("Informe o valor do primeiro termo da P.A.: ");
      scanf("%d", &primeiro_termo);

      printf("Informe o valor do segundo termo da P.A.: ");
      int segundo_termo;
      scanf("%d", &segundo_termo);

      printf("Informe o valor do último termo da P.A.: ");
      int ultimo_termo;
      scanf("%d", &ultimo_termo);

      n_termos = (ultimo_termo - primeiro_termo) / razao + 1;
   }

   printf("Termos da P.A.: ");

   for (i = 0; i < n_termos; i++) {
      printf("%d ", termo_atual);
      termo_atual += razao;
   }

   return 0;
}

