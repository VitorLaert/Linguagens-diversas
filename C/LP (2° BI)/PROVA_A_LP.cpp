#include <stdio.h>
int main (void){
	char nome [20];
	int t;
	
	printf("\nCALCULO DO CACHE DA BANDA");
	printf("\nNOME DA BANDA...................: ");
	scanf("%s", nome);
	printf("\nTEMPO DE SHOW EM HORAS COMPLETAS: ");
	scanf("%i", &t);
	printf("\n\nRESUMO DO PAGAMENTO");
	printf("\nBANDA...........................: %s" , nome);
	printf("\nTEMPO: %i HORAS", t);
	if (t == 1 ){
		printf("%10.2f", (t*350*2));
		printf("\nTAXA EXTRA..................: %10.2f", (t*350.00*2)*2.5/100);
		printf("\nTOTAL.......................: %10.2f", (t*350*.002)+((t*350.00*2)*2.5/100));
	} else
	if (t == 2){
		printf("%10.2f", (t*425*2));
		printf("\nTAXA EXTRA..................: %10.2f", (t*425*2)*3.5/100);
		printf("\nTOTAL.......................: %10.2f", (t*425*2)+((t*425*2)*3.5/100));
	} else
	if (t == 3){
		printf("%10.2f", (t*500*2));
		printf("\nTAXA EXTRA..................: %10.2f", (t*500*2)*4.5/100);
		printf("\nTOTAL.......................: %10.2f", (t*500*2)+((t*500*2)*4.5/100));
	} else {
		printf("%10.2f", (t*550*2));
		printf("\nTAXA EXTRA..................: %10.2f", (t*550*2)*5.5/100);
		printf("\nTOTAL.......................: %10.2f", (t*550*2)+((t*550*5)*5.5/100));
}
}
