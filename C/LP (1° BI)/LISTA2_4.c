# include <stdio.h>
int main (void){
	float x,y;
	
	printf("PROGRAMA PARA REALIZAR AS QUATRO OPERAÇOES");
	printf("\nDIGITRE UM NUMERO: ");
	scanf("%f", &x);
	printf("DIGITE OUTRO NUMERO: ");
	scanf("%f", &y);
	printf("O VALOR DA SOMA É: %f", (x+y));
	printf("O VALOR DA SUBTRAÇÃO É: %f", (x-y));
	printf("O VALOR DA MULTIPLICAÇÃO É: %f", (x*y));
	printf("O VALOR DA DIVISÃO É: %f", (x/y));
}
