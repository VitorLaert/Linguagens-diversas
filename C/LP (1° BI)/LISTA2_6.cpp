# include <stdio.h>
int main (void){
	float a,b,c;
	int d;
	
	printf("CALCULO DE ARAME E ESTACAS DA CERCA");
	printf("\nDIGITE A LARGURA DO TERRENO: ");
	scanf("%f", &a);
	printf("DIGITE O COMPRIMENTO: ");
	scanf("%f", &b);
	printf("DISTANCIA ENTRE AS ESTACAS: ");
	scanf("%f", &c);
	printf("NUMERO DE ARAMES NA CERCA: ");
	scanf("%i", &d);
	printf("\nSERAO NECESSARIAS %.1f ESTACAS", (2*(a+b))/d);
	printf("\nSERAO NECESSARIOS %.1f METROS DE ARAME",(2*(a+b))*d); 
}
