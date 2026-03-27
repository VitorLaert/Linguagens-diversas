#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
   float a, b, c, delta, x1, x2;

   printf("Digite o valor de a: ");
   scanf("%f", &a);

   printf("Digite o valor de b: ");
   scanf("%f", &b);

   printf("Digite o valor de c: ");
   scanf("%f", &c);

   delta = b*b - 4*a*c;

   if (delta < 0) {
      printf("Não existem raízes reais\n");
   } else if (delta == 0) {
      x1 = -b / (2*a);
      printf("Raiz única: x = %.2f\n", x1);
   } else {
      x1 = (-b + sqrt(delta)) / (2*a);
      x2 = (-b - sqrt(delta)) / (2*a);
      printf("Duas raízes reais: x1 = %.2f e x2 = %.2f\n", x1, x2);
   }

}
