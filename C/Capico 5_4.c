#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

	int main(void){
	setlocale(LC_ALL, "portuguese");
	
	char n;
	float v;
	int p;
	
	
	
		printf("vestidos e calçados \n parcelamento");
		printf("\n informe o nome do cliente: ");
		scanf("%s",n);
		printf("\n informe o valor da compra: ");
		scanf("%f", &v);
		printf("informe a quantidade de parcelas (1 a 5)");
		scanf("%i", &p);
		system("cls");
		printf("resumo");
		printf("\n clinte %s", n);
		
		switch (p){
			case 1:{
				printf("\n valor a pagar R$:%.2f", v);
				break;
			}
			case 2:{
				if (v<= 1000){
					printf("\n valor da parcela R$:%.2f", ((v*3,5/100)+v)/p);
					printf("\n valor total R$:%.2f", (v*3,5/100)+v);}
				else{
					printf("\n valor da parcela R$:%.2f", ((v*4/100)+v)/p);
					printf("\n valor total R$:%.2f", (v*4/100)+v);
				}			
				break;				
			}
			case 3:{
				if (v<= 1500){
					printf("\n valor da parcela R$:%.2f", ((v*4/100)+v)/p);
					printf("\n valor total R$:%.2f", (v*4/100)+v);}
				else{
					printf("\n valor da parcela R$:%.2f", ((v*4,5/100)+v)/p);
					printf("\n valor total R$:%.2f", (v*4,5/100)+v);}}	
				break;
				
			case 4:{
				if(v<=2000){
					printf("\n valor da parcela R$:%.2f", ((v*5/100)+v)/p);
					printf("\n valor total R$:%.2f", (v*5/100)+v);}
				else{
					printf("\n valor da parcela R$:%.2f", ((v*6/100)+v)/p);
					printf("\n valor total R$:%.2f", (v*6/100)+v);}	}			
				break;
			case 5:{
				if(v<= 2500){
					printf("\n valor da parcela R$:%.2f", ((v*6,5/100)+v)/p);
					printf("\n valor total R$:%.2f", (v*6,5/100)+v);}
				else{
					printf("\n valor da parcela R$:%.2f", ((v*7/100)+v)/p);
					printf("\n valor total R$:%.2f", (v*7/100)+v);}}
				break;
			default:
				printf("opção invalida!!");
	}

	}
