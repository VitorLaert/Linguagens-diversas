#include <stdio.h>
#include <ctype.h>

int main (void){
	float A, B;
	char OP;
	
	printf("CALCULO DA AREA DE FIGURAS PLANAS");
	printf("\nA - RETANGULO");
	printf("\nB - TRIANGULO");
	printf("\nC - CIRCULO");
	printf("\nD - SAIR DO PROGRAMA");
	printf("\nDIGITE SUA OPCAO.............: ");
	getchar();
	OP = toupper(getchar());
	switch (OP){
		case 'A':
			printf("\nCALCULO DA AREA DO RETANGULO");
			printf("\nINFORME O COMPRIMENTO: ");
			scanf("%f", &A);
			printf("\nINFORME A LARGURA: ");
			scanf("%f", &B);
			printf("\nAREA: %.1f", (A*B));
		break; 
		case 'B': 
			printf("\nCALCULO DA AREA DO TRIANGULO");
			printf("\nINFORME A BASE: ");
			scanf("%f", &A);
			printf("\nINFORME A ALTURA: ");
			scanf("%f", &B);
			printf("\nAREA: %.1f", (A*B/2));
		break;
		case 'C': 
			printf("\nCALCULO DA AREA DO CIRCULO");
			printf("\nINFORME O RAIO: ");
			scanf("%f", &A);
			printf("\nAREA: %.1f", (3.14*A*A));
		break;
		case 'D':
			printf("\nAGRADECEMOS PELA SUA ATENCAO");
		break; 
		default:
			printf("\nOPCAO NAO VALIDA. TENTE NOVAMENTE");
		break;
	}
}
