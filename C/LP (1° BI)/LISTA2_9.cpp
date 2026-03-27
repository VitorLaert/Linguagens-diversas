#include <stdio.h>
int main(void){
     char n[20]; float q,vu;
	
	printf("CALCULO DO DESCONTO");
	printf("\nINFORME O NOME DO PRODUTO: ");
	scanf("%s" , n);
	printf("\nINFORME A QUANTIDADE DE PRODUTO: ");
	scanf("%f" , &q);
	printf("\nINFORME O VALOR UNITARIO: ");
	scanf("%f" , &vu); 
	printf("\nVALOR TOTAL SEM DESCONTO %s: %.2f" ,n, (vu*q));
	printf("\nVALOR DO DESCONTO: %.2f" , (q-20)*vu*10/100);
	printf("\nO VALOR A PAGAR E: %.2f" , (vu*q)-(q-20)*vu*10/100);
}
	
		

