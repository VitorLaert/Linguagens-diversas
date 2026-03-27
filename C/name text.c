#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "portuguese");
	
	char n[40];
	
	printf(" digite seu nome: ");
	scanf("%s", n);
	printf(" seu nome é: %s", n);

	}
