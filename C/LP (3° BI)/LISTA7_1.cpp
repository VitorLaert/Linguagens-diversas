#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


struct cad{
char n[15], t[9];
int i;
};

struct cad fun[5];
int x;

void Digitar();
void Listar();

int main (void){
	char op;
	do {
		Digitar();
		Listar();
		do{
			printf("\nSAIR? (S/N)...: ");
			op = toupper(getchar());
		} while ((op != 'S') && (op != 'N'));
	} while (op != 'S');
}

void Digitar(){
	printf("\nDADOS DE 5 PESSOAS");
	for(x=0;x<5;x++){
		printf("\nNOME DA %ia.PESSOA: ", (x+1));
		scanf("%s", fun[x].n);
		printf("\nTELEFONE..........: ");
		scanf("%s", fun[x].t);
		printf("\nIDADE.............: ");
		scanf("%i", &fun[x].i);
		system("cls");
	}
}

void Listar(){
	system("cls");
	printf("LISTA DAS PESSOAS: ");
	printf("NOME	TELEFONE	IDADE");
	for (x=0;x<5;x++){
		printf("%s\t\t", fun[x].n);
		printf("%s\t\t", fun[x].t);
		printf("%i\n", fun[x].i);
	}
}
