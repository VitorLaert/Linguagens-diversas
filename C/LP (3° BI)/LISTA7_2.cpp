#include <stdio.h>
#include <ctype.h>

struct cad{
char n[15];
int t;
float v;
};

struct cad fun[5];
int x;

void Digitar();
void Listar();
float CalculaAumento;

int main (void){
	char op;
	do {
		Digitar();
		Listar();
		do{
			printf("\nSAIR? (S/N): ");
			op = toupper(getchar());
		} while ((op != 'S') && (op != 'N'));
	} while (op != 'S');
}

void Digitar(){
	printf("\nCADASTRO DE 5 FUNCIONARIOS");
	for(x=0;x<5;x++){
		printf("\nNOME DA %ia.PESSOA: ", (x+1));
		scanf("%s", fun[x].n);
		printf("\nTEMPO DE SERVICO (EM ANOS COMPLETOS): ");
		scanf("%i", &fun[x].t);
		printf("\nVALOR DO SALARIO: ");
		scanf("%f", &fun[x].v);
	}
}

void Listar(){
	printf("\nLISTA DAS INFORMACOES");
	printf("\n\nNOME\t\tTEMPO DE SERVICO\t\tSALARIO ATUAL\t\tNOVO SALARIO\n");
	for (x=0;x<5;x++){
		printf("%s\t\t", fun[x].n);
		printf("%i\t\t", &fun[x].t);
		printf("%.2f\t\t", &fun[x].v);
	}
	if (fun[x].t <= 5)
		printf("%f\n", (fun[x].v+fun[x].v*6.5)/100);
	else
		printf("%f\n", (fun[x].v+fun[x].v*9)/100);
}

