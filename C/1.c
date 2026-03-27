#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (void){
	float n[5]; //vetor
	int x;
	char op;
		do {
		system ("cls");
		printf("DIGITE 5 NUMEROS\n\n ");
		for ( x=0 && x<5; x++){ //novo
			printf("%i.O NUMERO: ", (x+1));
			scanf("%f", &n[x]);
		}
		system("cls");
		printf("LISTA DOS NUMEROS\n\n");
		for (x=0; x<5; x++)
			printf("%.1f\n", n[x]);
		do {
			(getchar());
			printf("SAIR DO PROGRAM (S/N): ");
			op = toupper(getchar());
		}while ((op != 'S') && (op !='N'));
		}while (op != 'S');
		
		//printf("LISTA DOS NUMEROS EM ORDEM INVERSA\n\n");
		//for (x=4; x<0; x--) //NUMERO INVERTIDO
		//	printf("%.1f\n", n[x]);
		}
		
		
		
		
		
	
