#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float x,y;
	
	printf("INFORME AS MEDIDAS DA PAREDE QUE SERA PINTADA");
	printf("\n INFORME A LARGURA: ");
	scanf("%f", &x);
	printf("\n INFORME O COMPRIMENTO: ");
	scanf("%f", &y);
	printf("\n A ÁREA É: %.2f", (x*y));
	printf("\n\n SERA NECESSÁRIO %.0f LATAS DE TINTAS", +(x*y)/2);
	
	
	
	
}
