#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i;
	float sal,media,soma = 0.0f;
	
	for(i=1; i<=5; i++){
		printf("\n informe o %d salario: ", i);
		scanf("%f", &sal);
		soma = soma + sal; // ou soma += salario;		
	}
	media = soma / (i - 1); // media = soma /5;
	printf("\n a media dos salarios é %.2f", media);
	return 0;
}
