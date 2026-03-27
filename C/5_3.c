#include <stdio.h>

#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "portuguese");

	char n[20];
	int d,ca;
	
	printf("CALCULAR A MENSALIDADE DE SEUS SÓCIOS");
	printf("\n INFORME O NOME DO SÓCIO: ");
	scanf("%s", n);
	printf("\n INFÓRMES O NÚMERO DE DEPENDENTES: ");
	scanf("%i", &d);
	printf("CATEGORIAS:");
 	printf("\n EXECUTIVO DIGITE (1)");
	printf("\n SUPERIOR DIGITE (2)");
	printf("\n PADRÃO DIGITE (3)");
	printf("\n SIMPLES DIGITE(4)");
	printf("\n SELECIONE A SUA CATEGORIA: ");
	scanf("%i", &ca);
	printf("RESUMO DO SÓCIO SIMPLES %s", n);
	printf("\n DEPENDENTES:%i", +d);
	
		switch (ca){

			case 1:
				printf("\n VALOR DA MENSALIDADE: R$180,00");
				printf("\n VALOR DA MENSALIDADE COM DEPENDENTES:R$%i ", +(180+20*d));
			break;
			
			case 2:		
				printf("\n VALOR DA MENSALIDADE: R$160,00");
				printf("\n VALOR DA MENSALIDADE COM DEPENDENTES:R$%i ", +(160+18*d));
			break;
			
			case 3:	
				printf("\n VALOR DA MENSALIDADE: R$140,00");
				printf("\n VALOR DA MENSALIDADE COM DEPENDENTES:R$%i ", +(140+16*d));
			break;
			
			case 4:
				printf("\n VALOR DA MENSALIDADE: R$120,00");
				printf("\n VALOR DA MENSALIDADE COM DEPENDENTES:R$%i ", +(120+14*d));
			break;
			
			default:
				printf("\n OPÇÃO INVALIDA, TENTE NOVAMENTE!!!");
			break;
		}
}
