#include <stdio.h>
int main (void){
	char nome [20];
	float v;
	
	printf("CALCULO DE COMISSAO");
	printf("NOME DO VENDEDOR: ");
	scanf("%i", nome);
	printf("VALOR DA VENDA: "); 
	scanf("%f", &v);
	printf("RESUMO DA VENDA");
	printf("VENDEDOR: %i", nome);
	printf("VALOR DA VENDA: %f", v);
	printf("DESCONTO: ", (v*10/100));
	printf("VALOR A PAGAR: ", (v(v*10/100)));
	printf("COMISSÃO: ");
	if (v <= 1000)
		printf(v-(v*10/100))*6.5/100);
	else
	if
}
