#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

struct cad{
char n[15];
int t;
float v;
};

struct cad fun[5];
int x;

void Digitar();
void Listar();
float CalculaAumento(int t,float v);

int main (void){
	char op;
	do {
		Digitar();
		Listar();
		do{
			getchar();
			printf("\nSAIR? (S/N).....................: ");
			op = toupper(getchar());
		} while ((op != 'S') && (op != 'N'));
	} while (op != 'S');
}

void Digitar(){
	printf("\nCADASTRO DE 5 FUNCIONARIOS");
	for(x=0;x<5;x++){
		printf("\nNOME DA %ia.PESSOA..................: ", (x+1));
		scanf("%s", fun[x].n);
		printf("\nTEMPO DE SERVICO (EM ANOS COMPLETOS): ");
		scanf("%i", &fun[x].t);
		printf("\nVALOR DO SALARIO....................: ");
		scanf("%f", &fun[x].v);
		system("cls");
	}
}

void Listar(){
	system("cls");
	printf("\nLISTA DAS INFORMACOES");
	printf("NOME	TEMPO DE SERVIÇO	SALARIO ATUAL	NOVO SALARIO\n");
	for (x=0;x<5;x++){
		printf("%s\t\t", fun[x].n);
		printf("%i\t\t", &fun[x].t);
		printf("%.2f\t\t", &fun[x].v);
		printf("%.2f", CalculaAumento(fun[x].t,fun[x].v));
	}
}

float CalculaAumento(int t,float v){
	if (t <= 5)
		return(v+v*6.5/100);
	else
		return(v+v*9/100);
}
