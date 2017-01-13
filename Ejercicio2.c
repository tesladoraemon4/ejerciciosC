/*
	MOstrar 3 numeros de forma ascendente 
*/

#include <stdio.h>


int main(){
	float a,b,c;

	printf("Introduce el primer numero :");
	scanf("%f",&a);

	printf("\nIntroduce el segundo numero :");
	scanf("%f",&b);


	printf("\nIntroduce el tercer numero :");
	scanf("%f",&c);

	if(a > b){

		if(b > c){
			printf("%f%f%f\n", a,b,c);
		}else{
			if(c > a){
				printf("%f%f%f\n", c,a,b);
			}else{
				printf("%f%f%f\n", a,c,b);
			}
		}


	}else{

		if(b > c){
			if(c > a){
				printf("%f%f%f\n", b,c,a);
			}
			else{
				printf("%f%f%f\n", b,a,c);
			}
		}else{
			printf("%f%f%f\n", c,b,a);
		}


	}






	return 0;
}