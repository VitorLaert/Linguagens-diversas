#include <stdio.h>

int main (void){
	
	float A, B; 
	
	printf("COMPARAÇÃO ENTRE DOIS NUMEROS");
	printf("\nDIGITE UM NUMERO.: ");
	scanf("%f", &A);
	printf("DIGITE OUTRO NUMERO: ");
	scanf("%f", &B);
	if (A>B)
		printf("O MAIOR É O %.1f E O MENOR É O %.1f",A,B);
	else
	if (A<B)
		printf("O MAIOR É O %.1f E O MENOR É O %.1f",B,A);
	else
		printf("OS DOIS SAO IGUAIS");
}
