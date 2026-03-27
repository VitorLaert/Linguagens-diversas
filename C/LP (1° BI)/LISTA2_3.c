# include <stdio.h>
int main (void){
	float B,H;

	printf("CALCULO DA AREA DO TRIANGULO");
	printf("\nINFORME A BASE: ");
	scanf("%f", &B);
	printf("INFORME A ALTURA: ");
	scanf("%f", &H);
	printf("O VALOR DA AREA DO TRIANGULO É: %.1f", (B*H/2));
}
