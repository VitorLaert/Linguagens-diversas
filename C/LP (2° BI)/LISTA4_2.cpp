#include <stdio.h>
int main (void){
	
	int X; 
	
	printf("PAR OU IMPAR E NEGATIVO OU POSITIVO");
	printf("\nDIGITE UM NUMERO INTEIRO: ");
	scanf("%i", &X);
	if ((X%2) == 0)
		printf("\n%i E PAR", X);
	else
		printf("\n%i E IMPAR", X); 
	if (X<0)
		printf("\n%i E NEGATIVO", X);
	else 
		printf("\n%i E POSITIVO", X);
}
