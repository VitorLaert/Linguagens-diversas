# include <stdio.h>
int main (void){
	float compra, juros;
	int parcela;
	
	printf("CALCULO DE JUROS E PARCELAS"); 
	printf("\n\nINFORME OS DADOS DA COMPRA"); 
	printf("\n\nVALOR: ");
	scanf("%f", &compra);
	printf("PERCENTUAL DE JUROS: "); 
	scanf("%f", &juros); 
	printf("PARCELAS (1 A 4): ");
	scanf("%i", &parcela);
	printf("\n\nRESUMO DA COMPRA"); 
	printf("\n\nVALOR.............: %.2f", compra); 
	printf("\nJUROS.............: %.2f", compra*juros/100);
	printf("\nVALOR DA PARCELA..: %.2f",(compra+(compra*juros/100))/parcela);
	printf("\nVALOR TOTAL A PAGA: %.2f", (compra+(compra*juros/100))); 
}
