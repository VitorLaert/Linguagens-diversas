#include <stdio.h>
#include <ctype.h>
int main (void){
	char nome [20], sexo;
	int y;
	
	printf("DADOS DO ALUNO");
	printf("\nINFORME O NOME DO ALUNO: ");
	scanf("%s", nome); 
	printf("\nINFORME A IDADE DO ALUNO: ");
	scanf("%i", &y);
	getchar(); 
	printf("\nINFORME O SEXO DO ALUNO(M/F): ");
	sexo = toupper(getchar());
	if (y<16)
		printf("\nAINDA NAO PODE VOTAR");
	else 
	if (y<18)
		printf("\nPODE VOTAR, MAS NAO E OBRIGADO");
	else 
	if (sexo == 'M')
		printf("\nE OBRIGADO A VOTAR E PRECISA SE ALISTAR NO SERVIÇO MILITAR OBRIGATORIO");
	else 
		printf("\nE OBRIGADA A VOTAR"); 
}
