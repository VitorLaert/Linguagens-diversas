#include <stdio.h>
#include <stdlib.h>
int main (void){
	float c;
	char n [20];
	int p; 
	
	printf("VESTIDOS E CALCADOS");
	printf("\nINFORME O NOME DO CLIENTE: ");
	scanf("%s", n);
	printf("\nINFORME O VALOR DA COMPRA: ");
	scanf("%f", &c);
	printf("\nINFORME A QUANTIDADE DE PARCELAS (1 A 5): ");
	scanf("%i", &p);
	system("cls");
	printf("\nRESUMO DA COMPRA");
	printf("\nCLIENTE: %s", n);
	printf("\nVALOR: %.2f", c);
	printf("\nQUANTIDADE DE PARCELAS: %i", p);
	switch (p){
		case 1:
			printf("\nVALOR A PAGAR: %.2f", c);
		break;
		case 2:
		if (c <= 1000){
			printf("\nVALOR DA PARCELA: %.2f", (c+(c*3.5)/100)/2);
			printf("\nVALOR TOTAL: %.2f", (c+(c*3.5)/100));
		} else {
			printf("\nVALOR DA PARCELA: %.2f", (c+(c*4)/100)/2);
			printf("\nVALOR TOTAL: %.2f", (c+(c*4)/100));
		break;
		case 3:
		if (c <= 1500){
			printf("\nVALOR DA PARCELA: %.2f", (c+(c*4)/100)/3);
			printf("\nVALOR TOTAL: %.2f", (c+(c*4)/100));
		} else {
			printf("\nVALOR DA PARCELA: %.2f", (c+(c*4.5)/100)/3);
			printf("\nVALOR TOTAL: %.2f", (c+(c*4.5)/100));
		break;
		case 4: 
		if (c <= 2000){
			printf("\nVALOR DA PARCELA: %.2f", (c+(c*5)/100)/4);
			printf("\nVALOR TOTAL: %.2f", (c+(c*5)/100));
		} else {
			printf("\nVALOR DA PARCELA: %.2f", (c+(c*6)/100)/4);
			printf("\nVALOR TOTAL: %.2f", (c+(c*6)/4));
		break;
		case 5:
		if (c <= 2500){
			printf("\nVALOR DA PARCELA: %.2f", (c+(c*6.5)/100)/5);
			printf("\nVALOR TOTAL: %.2f", (c+(c*6.5)/100));
		} else {
			printf("\nVALOR DA PARCELA: %.2f", (c+(c*7.5)/100)/5);
			printf("\nVALOR TOTAL: %.2f", (c+(c*7.5)/100));
			}}}}
		}
	}
