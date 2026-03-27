#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	int idade;
	
	printf("para entrar na balada ");
	printf("informe sua idade:");
	scanf("%d", &idade);
	
	
	if(idade >= 18 && idade <= 60){
		printf("maior de idade \n");
		printf("entrada liberada");
	}
	else
	 printf("menór de idade entrada proibida");
	 }
