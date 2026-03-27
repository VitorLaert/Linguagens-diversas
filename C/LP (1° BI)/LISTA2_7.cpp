# include <stdio.h>
int main (void){
	float V,D; 
	
	printf("CALCULO DO DESCONTO");
	printf("\nINFORME O VALOR DA COMPRA: ");
	scanf("%f", &V);
	printf("INFORME O PERCENTUAL DE DESCONTO: ");
	scanf("%f", &D); 
	printf("\n\nRESUMO DA COMPRA");
	printf("\n\nVALOR DA COMPRA: %10.2f", V);
	printf("\nVALOR DO DESCONTO: %10.2f", (V*D/100));
	printf("\nVALOR A PAGAR: %10.2f", (V-(V*D)/100));
}
