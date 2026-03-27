#include <stdio.h>
#include <stdlib.h>
#include (ctype.h)
int main (void){
	char n [20];
	int o, d;
	char op;
	
	printf("CALCULO DE DIARIAS");
	printf("NOME: ");
	scanf("%s", n);
	printf("CHALES: ");
	printf("A - BASICO");
	printf("B - EXECUTIVO");
	printf("C - LUXO");
	printf("INFORME O TIPO DE CHALÉ: ");
	getchar();
	op = (toupper(getchar());
	printf("NUMERO DE OCUPANTES: ");
	scanf("%i", o);
	printf("NUMERO DE DIARIAS: ");
	scanf("%i", d);
	printf("RESUMO");
	printf("NOME: %s", n);
	printf("NUMERO DE OCUPANTES: %i", o);
	printf("NUMERO DE DIARIAS: %i", d);
	printf("TIPO DE CHALE: %c", op);
	
}
