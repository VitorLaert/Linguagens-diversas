#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale (LC_ALL, "portuguese");
	 char n [40];
	 float s,p;
	 
	 printf("\n CALCULO DE AUMENTO SALÁRIAL. ");
	 printf("\n INFORME O NOME DO FUNCIONÁRIO: ");
	 scanf("%s", &n);
	 printf("\n INFORME O SALÁRIO: ");
	 scanf("%f", &s);
	 printf("\n INFORME O PERCENTUAL DO AMUNETO: ");
	 scanf("%f", &p);
	 printf("\n RESUMO");
	 printf("\n FUNCIONÁRIO: %.20s", (n));
	 printf("\n SALÁRIO: %.2f", (s));
	 printf("\n AUMENTO DE SALÁRIO: %.2f", (s*p/100));
	 printf("\n SALÁRIO COM AUMENTO: %.2f", (s+(s*p/100)));
	 printf("\n GRATIFICAÇÃO: %.2f", ((s*3.5)/100));
	 printf("\n SALÁRIO FINAL: %.2f", (s+(s*p/100)+(s+(s*p/100)*3.5/100)));
	 printf("\n PROGAMA FEITO POR CAPICO!!!");
}
