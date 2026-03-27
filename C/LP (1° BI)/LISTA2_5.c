#include <stdio.h>
int main (void){
	float l,c;  
	
	printf("CÁLCULO DE AZULEJO DA COZINHA");
	printf("\nDIGITE A LARGURA DA COZINHA: ");
	scanf("%f", &l);
	printf("DIGITE O COMPRIMENTO: ");
	scanf("%f", &c);
	printf("\nSERÃO NECESSÁRIAS %.1f CAIXAS DE AZULEJO",((l*c)+(2*l*3)+(2*c*3))/1.5); 
}
