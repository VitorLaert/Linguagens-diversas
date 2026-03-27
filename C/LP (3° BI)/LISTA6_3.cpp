#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main (void){
	float a[5];
	float b[5];
	float c[5];
	int x;
	char op;
	do{
	
	
		printf("DIGITE 5 NUMEROS PARA OS DOIS VETORES");
		for (x=0;x<5;x++){
			printf("%io. NUMEROS DO VETOR 1: ", (x+1));
			scanf("%f", &a[x]);
			printf("%io. NUMEROS DO VETOR 2: ", (x+1));
			scanf("%f", &b[x]);
			c[x] = a[x] + b[x];
		}
		system("cls");
		printf("VALORES DO VETOR 1");
		for (x=0;x<5;x++){
			printf("%.1f | ",a[x]);
		}
		printf("VALORES DO VETOR 2");
		for (X=0;X<5;X++){
			printf("%.1f | ", b[x]);
		}
		printf("VALORES DO VETOR 3");
		for (x=0;x<5;x++){
			printf("%.1f | ", c[x]);
		}
		do{
			getchar()
		}
		}
	}
}
