#include <stdio.h>
int main (void){
	char nome [20];
	float t;
	
	printf("\nCALCULO DO CACHE DA BANDA");
	printf("\nNOME DA BANDA: ");
	scanf("%s", nome);
	printf("TEMPO DE SHOW: ");
	scanf("%i", &t);
	printf("\nRESUMO DO PAGAMENTO");
	printf("\nBANDA: %s", nome);
	printf("\nTEMPO: %i HORAS", t);
	if (t <= 1){
		printf("%10.2f", (t*170*3));
		printf("\nTAXA EXTRA: %10.2f", (t*170*3)*3.5/100);
		printf("\nTOTAL: %10.2f", (t*170*3)+((t*170*3)*3.5/100));
	} else
	if (t <= 2.5){
		printf("%10.2f", (t*220*3));
		printf("\nTAXA EXTRA: %10.2f", (t*220*3)*4.5/100);
		printf("\nTOTAL: %10.2f", (t*220*3)+((t*220*3)*4.5/100));
	} else
	if (t <= 4){
		printf("%10.2f", (t*330*3));
		printf("\nTAXA EXTRA: %10.2f", (t*330*3)*5.5/100);
		printf("\nTOTAL: %10.2f", (t*330*3)+((t*330*3)*5.5/100));
	} else
		printf("%10.2f", (t*400*3));
		printf("\nTAXA EXTRA: %10.2f", (t*400*3)*6.5/100);
		printf("\nTOTAL: %10.2f", (t*400*3)+((t*400*3)*6.5/100));
}
