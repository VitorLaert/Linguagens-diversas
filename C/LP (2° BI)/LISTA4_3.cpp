#include <stdio.h>
int main (void){
	float A, MA, ME; //REAL
	
	printf("COMPARAÇÃO ENTRE 4 NUMEROS");
	printf("\nDIGITE UM NUMERO: ");
	scanf("%f", &A);
	MA <- A;
	ME <- A;
	printf("\nDIGITE OUTRO NUMERO: ");
	scanf("%f", &A);
	if (A>MA) {
		MA <- A;
	}
	else 
	if (A<ME) {
		ME <- A;
	}
	printf("\nDIGITE OUTRO NUMERO: ");
	scanf("%f", &A);
	if (A>MA) {
		MA <- A;
	}
	else 
	if (A<ME) {
		ME <- A;
	}
	printf("\nDIGITE OUTRO NUMERO: ");
	scanf("%f", &A);
	if (A>MA) {
		MA <- A;
	}
	else 
	if (A<ME) {
		ME <- A;
	}
	printf("\nO MAIOR E: %f", MA);
	printf("\nO MENOR E: %f", ME);
}
