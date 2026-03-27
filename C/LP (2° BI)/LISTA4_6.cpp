#include <stdio.h>
int main (void){
	float v; 
	
	printf("DADOS DA COMPRA");
	printf("\nINFORME O VALOR DA COMPRA: ");
	scanf("%f", &v);
	if (v<=650.00){
		printf("\nVALOR DOS JUROS: %.2f", v*2.5/100);
		printf("\nVALOR TOTAL: %.2f", v+(v*2.5)/100);
	}else
	if (v<=1450.00){
		printf("\nO VALOR DOS JUROS: ", v*1.75/100);
		printf("\nVALOR TOTAL: ", v+(v*1.75)/100);
	}else
	if (v<=2700.00){
		printf("\nO VALOR DO DESCONTO: ", v*2.10/100);
		printf("\nVALOR TOTAL: ");
}
}
