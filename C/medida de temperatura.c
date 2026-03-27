#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float kelvin, celsius, fah;
	
	
	
	setlocale(LC_ALL, "portuguese");

	printf("PROGAMA DE CALCULO DE MEDIDA DE TEMPERATURA ");
	printf("\nINFORME A MEDIDA EM KELVIN:");
	scanf("%f", &kelvin);
	printf("\n A MEDIDA EM GRAUS CELSIUS: %.2f", +(kelvin-273.15));
	printf("\n A MEDIDA EM FAHRENHEIT: %.2f", ((kelvin-273.15)*9/5+32));
	
	
	printf("\n\n\nINFORME A MEDIDA EM CELSIUS:");
	scanf("%f", &celsius);
	printf("\n A MEDIDA EM GRAUS KELVIN: %.2f", +(celsius+273.15));
	printf("\n A MEDIDA EM FAHRENHEIT: %.2f", (celsius*9/5+32));
	
	
	
	printf("\n\n\nINFORME A MEDIDA EM FAHRENHEIT:");
	scanf("%f", &fah);
	printf("\n A MEDIDA EM GRAUS CELSIUS: %.2f", +(fah-32)*5/9);
	printf("\n A MEDIDA EM kelvin: %.2f", ((fah-32)*5/9+273.15));
	
}



