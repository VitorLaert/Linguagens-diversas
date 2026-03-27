#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main (void){
	float n[5];
	int x;
	char op;
	do {
	
		printf("DIGITE 5 NUMEROS\n\n");
		for (x=0;x<5;x++){
			printf("%io. NUMERO: ", (x+1));
			scanf("%f", &n[x]);	
		}
		system("cls");
		printf("LISTA DOS NUMEROS\n\n");
		for (int x=0;x<5;x++)
			printf("%.1f\n",n [x]);
		do {
			getchar();
			printf("SAIR DO PROGRAMA? (S/N): ");
			op = toupper(getchar());
		} while ((op != 'S') && (op != 'N'));
	} while (op != 'S');
}
