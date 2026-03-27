#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "portuguese");
	int vet[5] = {0, 0, 0, 0, 0};
	int i;
	
	for(i=0; i<5; i++){
		printf("insira o elemento da poisição %d:", i);
		scanf("%d", &vet[i]);
	}
		for(i=0; i<5; i++){
		printf("%d:", vet[i]);
	}
	

}
