//Programa numero 1 sueldo de un trabajador 
#include <stdio.h>

double total(double sueldo, float porcentaje);

int main(){

	double s;

	float porcentaje=0;



	printf("\n Introduce el sueldo base del trabajador  ");


	scanf("%lf",&s);



	if(s >= 0 && s <= 1000){
		porcentaje = 0.05;
	}else if(s >= 1001 && s < 5000){
		porcentaje = 0.15;

	}else{
		porcentaje = 0.3;

	}



	printf("El sueldo total es : %lf \n", total(s,porcentaje));








	return 0;
}



double total(double sueldo, float porcentaje){
	return sueldo-(sueldo*porcentaje);
}










