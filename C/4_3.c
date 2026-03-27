#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, ("portuguese"));
3
	float a,ma,me;


	printf("COMPARAÇÃO ENTRE 4 NÚMEROS");
	printf("\n DIGITE UM NÚMERO: ");
	scanf("%f", &a);
		ma = a;
		me = a;
	printf("\n DIGITE OUTRO NÚMERO: ");
	scanf("%f", &a);
	
		if (a>ma)
				ma = a;
		else 
	
	
		if (a<me)
				me = a;	 
	
	
	printf("\n DIGITE OUTRO NÚMERO: ");
	scanf("%f", &a);
	
		if (a>ma)
				ma = a;
		else 
	
	
		if (a<me)
				me = a;	 
	
	
	printf("\n DIGITE OUTRO NÚMERO: ");
	scanf("%f", &a);
	
		if (a>ma)
				ma = a;
		else 
	
	
		if (a<me)
				me = a;	 
	
	
	
	printf("O MAIOR NÚMERO É: %.2f", ma);
	printf("\n O MENOR NÚMERO É: %.2f", me);
	
			
}
