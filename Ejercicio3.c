/*
	Calcular el cubo de un numero y terminar con un numero negativo
*/

#include <stdio.h>

#include <math.h>




int main(){

	long int  n=0;

	while(n >= 0){

		printf("Introduce el numero -1 para terminar\n");
		scanf("%ld",&n);

		printf("El resultado es %ld\n", (n*n*n));


	}








	return 0;
}