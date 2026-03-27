#include <stdio.h>
#include <stdlib.h>

int main (void){
	int c, d; 
	char n [20];
	
	printf("CALCULO DA MENSALIDADE DOS SOCIOS");
	printf("\n1-EXCUTIVO");
	printf("\n2-SUPERIOR");
	printf("\n3-PADRAO");
	printf("\n4-SIMPLES"); 
	printf("\nINFORME A CATEGORIA: ");
	scanf("%i", &c);
	printf("\nDIGITE O NOME DO SOCIO: ");
	scanf("%s", n);
	printf("\nNUMERO DE DEPENDENTES: ");
	scanf("%i", &d);
	system("cls");
	printf("\nRESUMO");
	printf("\nSOCIO: %s", n);
	printf("\nDEPENDENTES: %i", d);
	switch (c){
		case 1:
			printf("\nCATEGORIA: EXECUTIVO");
			printf("\nMENSALIDADE: %i", (180+(20*d)));
		break;
		case 2:
			printf("\nCATEGORIA: SUPERIOR");
			printf("\nMENSALIDADE: %i", (160+(18*d)));
		break;
		case 3:
			printf("\nCATEGORIA: PADRAO");
			printf("\nMENSALIDADE: %i", (140+(16*d)));
		break;
		case 4:
			printf("\nCATEGORIA: SIMPLES");
			printf("\nMENSALIDADE: %i", (120+(16*d)));
		break;
		default:
			printf("\nOPCAO NAO VALIDA. TENTE NOVAMENTE");
	}
}
