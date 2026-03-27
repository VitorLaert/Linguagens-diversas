#include <stdio.h>

int main (void){
	float sal, per; 
	char nome [20]; 
	printf("CALCULO DE AUMENTO DE SALARIO"); 
	printf("\nDIGITE O NOME DO FUNCIONARIO: ");
	scanf("%s", nome);
	printf("SALARIO..............: ");
	scanf("%f", &sal);
	printf("PERCENTUAL DE AUMENTO: ");
	scanf("%f", &per);
	printf("RESUMO DOS DADOS");
	printf("\nFUNCIONARIO........: %s", nome);
	printf("\nSALARIO: %.2f", sal);
	printf("\nVALOR DO AUMENTO...: %10.2f", (sal*per/100));
	printf("\nSALARIO COM AUMENTO: %10.2f", (sal+(sal*per/100)));
	printf("\nGRATIFICACAO.......: %10.2f", (sal+(sal*per/100))*3.5/100);
	printf("\nSALARIO FINAL......: %10.2f", (sal+(sal*per/100))+(sal+(sal*per/100))*3.5/100);
}
