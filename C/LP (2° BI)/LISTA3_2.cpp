#include <stdio.h>

int main (void){
	float m; 
	int d;
	char nome [20]; 
	printf("REAJUSTE DO VALOR DA MENSALIDADE DE UM CLUBE"); 
	printf("\nDIGITE O NOME DO TITULAR SOCIO.........: "); 
	scanf("%s", nome);
	printf("INFORME O VALOR DE DEPENDENTES.........: "); 
	scanf("%i", &d); 
	printf("INFORME O VALOR BASICO DA MENSALIDADE..: "); 
	scanf("%f", &m); 
	printf("\nNOME DO SOCIO........................: %s", nome); 
	printf("\nVALOR DO AUMENTO.....................: %.2f", (d*25+m))*(5.5/100); 
	printf("\nVALOR COM REAJUSTE...................: %.2f", (d*25+m))+(d*25+m)*(5.5/100); 
}
