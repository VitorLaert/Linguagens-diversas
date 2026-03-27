#include <stdio.h>
#include <stdlib.h>
int main(void){
	float p,s,t;
	char m[30];

	printf("NOTAS");
	printf("\n INFORME A MATERIA QUE DESEJA CALCULAR:");
	scanf("%s", m);
	printf("\n INFORME A MEDIA DO 1º BIMESTRE: ");
	scanf("%f", &p);
	printf("INFORME A MEDIA DO 2º BIMESTRE: ");
	scanf("%f", &s);
	printf("INFORME A MEDIA DO 3º BIMESTRE: ");
	scanf("%f", &t);	

	printf("\n  EM %s", m);
			printf("VOCÊ PRECISA DE %.2f NO QUARTO BIMESTRE PARA SER APROVADO ", (60-((p*2)+(s*2)+(t*3)))/3);
	if (((p*2)+(s*2)+(t*3))>=60){
		printf("\n VOCÊ ESTA APROVADO");
	}
	else{
		printf("VOCÊ PRECISA DE %.2f NO QUARTO BIMESTRE PARA SER APROVADO ", (60-((p*2)+(s*2)+(t*3)))/3);
	}
	
	
	
}
