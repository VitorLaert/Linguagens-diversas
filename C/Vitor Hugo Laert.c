// NOTA 9,8
#include <stdio.h>
#include <locale.h>

int main(void){	
	setlocale(LC_ALL, "portuguese");
	
	char n[20];
	float h;// ERRO 
	
	printf("CONTRATO DE BANDAS");
	printf("\n DIGITE O NOME DA BANDA: ");
	scanf("%s", n);
	printf("\n  DIGITE O TEMPO DE DURAÇÃO DO SHOW EM HORAS: ");
	scanf("%f", &h);
		if(h<=1){
			printf(" A BANDA %s IRA FAZER UM SHOW DE %.1f HORAS", n,h);
			printf("\n O VALOR BÁSICO QUE A BANDA IRA RECEBER É DE R$%.2f", h*2*350);
			printf("\n A BANDA VAI TER UMA TAIXA EXTRA DE R$ %.2f", (h*2*350*2.5/100));
			printf("\n O VALOR QUE A BANDA IRA RECEBER R$ %.2f", (h*2*350*2.5/100)+h*2*350);
}
		else
		if(h<=2){
			printf(" A BANDA %s IRA FAZER UM SHOW DE %.1f HORAS", n,h);
			printf("\n O VALOR BÁSICO QUE A BANDA IRA RECEBER É DE R$%.2f", h*2*425);
			printf("\n A BANDA VAI TER UMA TAIXA EXTRA DE R$ %.2f", (h*2*425*3.5/100));
			printf("\n O VALOR QUE A BANDA IRA RECEBER R$ %.2f", (h*2*425*3.5/100)+h*2*425);
}
		else
		if(h<=3){
			printf(" A BANDA %s IRA FAZER UM SHOW DE %.1f HORAS", n,h);
			printf("\n O VALOR BÁSICO QUE A BANDA IRA RECEBER É DE R$%.2f", h*2*500);
			printf("\n A BANDA VAI TER UMA TAIXA EXTRA DE R$ %.2f", (h*2*500*4.5/100));
			printf("\n O VALOR QUE A BANDA IRA RECEBER R$ %.2f", (h*2*500*4.5/100)+h*2*500);
}
		else{
			printf(" A BANDA %s IRA FAZER UM SHOW DE %.1f HORAS", n,h);
			printf("\n O VALOR BÁSICO QUE A BANDA IRA RECEBER É DE R$%.2f", h*2*550);
			printf("\n A BANDA VAI TER UMA TAIXA EXTRA DE R$ %.2f", (h*2*550*5.5/100));
			printf("\n O VALOR QUE A BANDA IRA RECEBER R$ %.2f", (h*2*550*5.5/100)+h*2*550);
}
		
	printf("\n PROGAMA FEITO POR LAERT");
}
