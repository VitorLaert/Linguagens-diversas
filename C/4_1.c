#include <stdio.h>
#include <locale.h>


int main(void){
setlocale(LC_ALL, ("portuguese"));
float x,y;


   printf("COMPARAÇÃO ENTRE 2 NÚMEROS");
   printf("\n DIGITE UM NÚMERO: ");
   scanf("%f", &x);
   printf("\n DIGITE OUTRO NÚMERO: ");
   scanf("%f", &y);
   if (x>y) 
   	printf("\n O MAIOR É O:%.2f E O MENOR É O %.2f", x,y );
   if (x<y)
	printf("\n O MAIOR É O:%.2f E O MENOR É O %.2f", y,x);
   else{
    printf("\n AMBOS SÃO IGUAIS");}
   printf("\n ASS: CAPICO")

}
