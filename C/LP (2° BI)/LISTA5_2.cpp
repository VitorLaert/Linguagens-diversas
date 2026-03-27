#include <stdio.h>
#include <stdlib.h>

int main (void){
	float d;
	int p;
	char nome [20];
	
	printf("CALCULOS DAS PARCELAS COM DESCONTO");
	printf("\nINFORME O NOME DO CLIENTE: ");
	scanf("%s", nome);
	printf("\nDIGITE O VALOR DA DIVIDA: ");
	scanf("%f", &d);
	printf("\nINFORME A QUANTIDADE DE PARCELAS (1 A 5): ");
	scanf("%i", &p);
	system("cls");
	printf("\nRESUMO DA DIVIDA");
	printf("\nCLIENTE: %s", nome);
	printf("\nVALOR DA DIVIDA: %.2f", d);
	switch (p){
		case 1:
			printf("\nVALOR A PAGAR (PARCELA UNICA): %.2f", (d-d*12/100));
		break;
		case 2:
			printf("\nVALOR A PAGAR: %.2f", (d-d*10/100));
			printf("\nVALOR DAS PARCELAS: %.2f", (d-d*10/100)/p);
		break;
		case 3:
			printf("\nVALOR A PAGAR: %.2f", (d-d*8/100));
			printf("\nVALOR DAS PARCELAS: %.2f", (d-d*8/100)/p);
		break;
		case 4:
			printf("\nVALOR A PAGAR: %.2f", (d-d*6/100));
			printf("\nVALOR DAS PARCELAS: %.2f", (d-d*6/100)/p);
		break;
		case 5:
			printf("\nVALOR A PAGAR: %.2f", (d-d*4/100));
			printf("\nVALOR DAS PARCELAS: %.2f", (d-d*4/100)/p);
		break;
		default:
			printf("\nNUMERO DE PARCELAS INVALIDO! TENTE NOVAMENTE.");
		break;
	}
}
