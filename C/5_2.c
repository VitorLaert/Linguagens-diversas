#include <stdio.h>

#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	float d;
	char n[20]; 
	int p;
	
	printf("\n PARCELAS DE CLIENTES INADIMPLENTES");
	printf("\n INFORME O NOME DO CLIENTE: ");
	scanf("%s", n);
	printf("\n INFORME O VALOR DA DIVIDA: ");
	scanf("%f", &d);
	printf("\n INFORME A QUANTIDADE DE PARCELAS (1 เ 5): ");
	scanf("%i", &p);
	
	switch (p){
		
	case 1:
		printf("\n VALOR ม PAGAR: %.2f", d-d*12/100);
	break;
		
	case 2:
		printf("\n VALOR ม PAGAR: %.2f", d-d*10/100);
		printf("\n VALOR DAS PARCELAS: %.2f", (d-d*10/100)/p);
	break;
		
	case 3:
		printf("\n VALOR ม PAGAR: %.2f", d-d*8/100);
		printf("\n VALOR DAS PARCELAS: %.2f", (d-d*8/100)/p);
	break;
		
	case 4:
		printf("\n VALOR ม PAGAR: %.2f", d-d*6/100);
		printf("\n VALOR DAS PARCELAS: %.2f", (d-d*6/100)/p);
	break;
		
	case 5:
		printf("\n VALOR ม PAGAR: %.2f", d-d*4/100);
		printf("\n VALOR DAS PARCELAS: %.2f", (d-d*4/100)/p);
	break;
		
	default:
		printf("\n OPวรO INVALIDA, TENTE NOVAMENTE!!!");
	break;
}
	
	
}
