#include <stdio.h>

int main (void){
	float s, c, d;
	printf("COMISSÃO DE UM GARCOM"); 
	printf("\nINFORME O VALOR QUE FOI VENDIDO NA SEXTA..: "); 
	scanf("%f", &s);
	printf("INFORME O VALOR  QUE FOI VENDIDO NO SABADO: "); 
	scanf("%f", &c);
	printf("INFORME O VALOR QUE FOI VENDIDO NO DOMINGO: ");
	scanf("%f", &d); 
	printf("\nO VALOR TOTAL VENDIDO PELO GARCOM E.......: %.2f", (s+c+d)); 
	printf("\nO VALOR DA COMISSAO E DE..................: %.2f", (s+c+d*10/100)); 
}
