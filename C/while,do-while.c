#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i;
	
	i = 1;
	
	while(i <= 10){
		printf("%d ", i);
		i = i + 1; // i++; 
	}
	
	
	
	
	
	do{
		printf("%d ", i);
		i = i + 1; // i++; 
		
	}while(i <= 10);
	
	
	
	for(i=1; i<=10; i++){
		printf("%d ", i);
	    
		
	}
}
