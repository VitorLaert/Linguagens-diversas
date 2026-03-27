#include <stdio.h>
#include <locale.h>

struct dados{
	int cod;
	float valor;
	char n [50];
};

int main(){
	
	setlocale (LC_ALL, "portuguese");
	struct dados d;
	
	printf("\n digite o seu nome:");
	scanf("%s", &d.n);
	printf("\n digite a sua idade: ");
	scanf("%d", &d.cod);
	printf("\n digite o valor do seu salário em reais:");
	scanf("%f", &d.valor);

	printf("\n os dados são:");
	printf("\n nome do usuário é: %s", d.n);
	printf("\n a idade é: %d", d.cod);
	printf("\n valor do salário é: R$ %.2f", d.valor);
	
}
