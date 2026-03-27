#include <stdio.h>

int main (void){
	float v,j;
	int p;
	
	printf("PROGAMA PARA SOMA O VALOR DAS PARCELA E O TOTAL");
	printf("\nINFORME O VALOR DA COMPRA:");
	scanf("%f", &v);
	printf("\nINFORME O PERCENTUAL DE JUROS:");
	scanf("%f", &j);
	printf("\nINFORME A QUANTIDADE DE PARCELAS:");
	scanf("%i", &p);
	printf(" \nO VALOR DA COMPRA E %.2f", (v));
	printf(" \nO VALOR DOS JUROS E %.2f", (v*j/100));
	printf(" \nO VALOR DAS PARCELAS E DE %.2f", (((v*j)/100)+v)/p);
	printf("\nO VALOR TOTAL E %.2f", (((v*j)/100)+v));
	
}
