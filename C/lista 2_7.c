#include <stdio.h>

int main (void) {
	float c,d;
	
	printf("VALOR DO DESCONTO E TOTAL A PAGAR");
	printf("\n DIGITE O VALOR DA COMPRA:");
	scanf("%f", &c);
	printf("DIGITE O PERCENTUAL DO DESCONTO:");
	scanf("%f", &d);
	printf("\n O VALOR DO DESCONTO E: %.1f", (c*d)/100);
	printf("\n O VALOR DA COMPRA E: %.1f", (c));
	printf("\n O VALOR A PAGAR E: %.1f reais.", (c-(c*d)/100));
	
	
}
