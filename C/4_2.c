#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "portuguese");
	int a;
	
	printf("DETERMINAR SE O NÚMERO É NEGATIVBO OU POSITIVO, E SE É IMPAR OU PAR");
	printf("\n DIGITE UM NÚMERO: ");
	scanf("%i", &a);
	if (a<0)
		printf("\n O NÚMERO É NEGATIVO");
	if (a>0)
		printf("\n O NÚMERO É POSITIVO");
	if ((a%2) == 0)
		printf("\n O NÚMERO É PAR");
	else {
		printf("\n O NÚMERO É IMPAR");
}
   printf("\n  ASS: CAPICO");
	
}
