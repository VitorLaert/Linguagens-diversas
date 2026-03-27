#include <stdio.h>
int main (void){
	char nome [20];
	float m;
	
	printf("DADOS DO ALUNO");
	printf("\nINFORME O NOME DO ALUNO.: ");
	scanf("%s", nome);
	printf("\nINFORME A MEDIA DO ALUNO: ");
	scanf("%f", &m);
	if (m<=4.99)
		printf("\nD_REPROVADO");
	else
	if (m<=6.99)
		printf("\nC_RECUPERACAO");
	else 
	if (m<=8.99)
		printf("\nB_APROVADO COM BOM APROVEITAMENTO");
	else 
		printf("\nA_APROVADO COM EXCELENTE APROVEITAMENTO");
}
