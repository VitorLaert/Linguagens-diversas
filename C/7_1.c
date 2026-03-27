#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <locale.h>

	struct cad{
		char nome[15], telefone[9];
		int idade;
		int x;
			};
		void Digitar();	
		struct cad p[5];
int main(void){
	setlocale (LC_ALL, "portuguese");

	char op;
	int x;
	do{
		Digitar();
		Listar();
		do{
			printf("SAIR? (S/N): ");
			op = toupper(getchar());
		}while ((op != 'N') && (op != 'S'));
	}while (op != 'S');
}
void Digitar(){
	int x;
	printf("\nCADASTRO DE 5 PESSOSAS");
	for (x=0; x<5; x++){
		printf("\n NOME DA %iª. PESSOA: ", (x+1));
		scanf("%s", p[x].nome);
		printf("telefone: ");
		scanf("%s", p[x].telefone);
		printf("IDADE: ");
		scanf("%i", &p[x].idade);		
	}
}

void Listar(){
	int x;
	printf("RELAÇÃO DE PESSOAS ");
	printf("\nNOME\t\tTELEFONE\t\tIDADE\n");
	for (x=0; x<5; x++){
	printf("%s\t\t", p[x].nome);
	printf("%s\t\t", p[x].telefone);
	printf("%i\n", p[x].idade );
	}
}
