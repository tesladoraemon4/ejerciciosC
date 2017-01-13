#include <stdio.h>
#include <math.h>
//hacer una sumatoria desde x hasta x +10 

//la sumatoria de x al cuadrado


int main(){

	int n=0,aux;
	printf("introduce el numero n \n");

	scanf("%d", &n);

	for (int i = n; i < (n+10); ++i)
	{

		aux += pow(i,2);

	}


	printf("%d\n", aux);

	return 0;
}


/*
int sumatoria(int n){
	if(){

	}else{
		return sumatoria( pow(n,2) ) + n;
	}



}
*/