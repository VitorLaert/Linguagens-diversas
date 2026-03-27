#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main (void){
	int n[10];
	int x;
	char op;
	int sp, si;
	do{
		
		printf("DIGITE 10 NUMEROS");
		sp = 0;
		si = 0;
		for (x=0;x<10;x++){
			printf("\n%io. NUMERO.............: ", (x+1));
			scanf("%i", &n[x]); 
			if ((n[x]%2) == 0){
				sp = sp + n[x];
			} else
				si = si + n[x];
		}
			system("cls");
			printf("\nSOMA DOS PARES..........: %i", sp);
			printf("\nSOMA DOS IMPARES........: %i", si);
			printf("\nSOMA DE TODOS OS NUMEROS: %i", (sp+si));
			printf("\nMEDIA ARITMETICA........: %.1f", (float)(sp+si)/10);
		do{
			getchar();
			printf("\nSAIR? (S/N).............: ");
			op = toupper(getchar());
		} while ((op != 'S') && (op != 'N'));
	} while (op != 'S');
}
