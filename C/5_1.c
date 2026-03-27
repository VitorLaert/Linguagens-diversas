#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "portuguese");
	
	char fig;
	float c,l;
	
		printf("ESCOLHA A FIGURA QUE DE=SEJA CALCULAR A ÁREA");
		printf("\n (A) RETÂNGULO");
		printf("\n (B) TRIÂNGULO");
		printf("\n (C) CIRCULO");
		printf("\n (D) SAIR");
		printf("\n DIGITE A OPERAÇÃO DESEJADA: ");
		
	fig = toupper(getchar());	
	
	switch (fig) {
		
		case 'A':
			printf("\n RETANGULO SELECIONADO");
			printf("\n INFORME O COMPRIMENTO: ");
			scanf("%f", &c);
			printf("\n INFORME A LARGURA: ");
			scanf("%f", &l);
			printf("\n  A ÁREA DO RETÂNGULO É: %.2f", l*c);
		break;
		
		case 'B':
			printf("\n TRIÂNGULO SELECIONADO");
			printf("\n INFORME O COMPRIMENTO DA BASE: ");
			scanf("%f", &c);
			printf("\n INFORME A ALTURA: ");
			scanf("%f", &l);
			printf("\n  A ÁREA DO TRIÂNGULO É: %.2f", (l*c)/2 );
		break;
		
		case 'C':
			printf("\n CIRCULO SELECIONADO");
			printf("\n INFORME O COMPRIMENTO DO RAIO: ");
			scanf("%f", &c);
			printf("\n  A ÁREA DO CIRCULO É: %.2f", c*c*3,14 );
		break;
		
		case 'D':
			printf("\n OBRIGADO POR USAR ESSE PROGAMA \n FIM ");
		break;
		
		default:
			printf("\n OPÇÃO SELECIONADA NÃO EXISTENTE");
		break;
}
}
