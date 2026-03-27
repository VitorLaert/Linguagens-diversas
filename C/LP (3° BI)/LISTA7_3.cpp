#include <stdio.h>
#include <ctype.h>

struct cad{
char n[15];
int q;
float p;
};

struct cad v[5];
int x;

void Digitar();
void Listar();
float adicional(float p);

int main (void){
	char op;
	do{
		Digitar();
		Listar();
		do{
			printf("SAIR? (S/N): ");
			op = toupper(getchar());
		}while ((op != 'S') && (op != 'N'));
	}while (op != 'S');
}

void Digitar(){
	printf("VENDA DO LOTE DE ANIMAIS");
	for(x=0;x<5;x++){
		printf("NOME DO %io.CLIENTE: ", (x+1));
		scanf("%s", v[x].n);
		printf("QUANTIDADE DE ANIMAIS POR LOTE (MIN.20): ");
		scanf("%i", v[x].q);
		printf("PESO MEDIO DA NOVILHA (EM ARROBA): ");
		scanf("%f", v[x].p);
	}
}

void Listar(){
	printf("LISTA DAS INFORMACOES");
	printf("NOME	QUANTIDADE	PESO	PRECO BASICO	ADICIONAL	VALOR TOTAL");
	for (x=0;x<5;x++){
		printf("%s\t\t", v[x].n);
		printf("%i\t\t", v[x].q);
		printf("%f\t\t", v[x].p);
		printf("%.2f\t\t", v[x].p*105);
		printf("%.2f\t\t", adicional(v[x].p));
		printf("%.2f\n", v[x].p*105+adicional(v[x].p));
	}
}

float adicional(float p){
	if (v[x].p <= 13)
		return(v[x].p*105*8.6/100);
	else
		return(v[x].p*105*9.3/100);
}

}
