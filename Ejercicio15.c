#include <stdio.h>
/*
	Numero fabbonaci 
*/

int fabbonaci (int);


int main()
{	
	int n=0;


	printf("Introduce el numero n \n");
	scanf("%d",&n);
	int aux=0;
	for (int i = 0; i <= n; ++i)
	{
		aux += i;

	}

	printf("%d con el for\n", aux);

	printf("%d con el metodo recursivo \n",fabbonaci(n) );



	return 0;
}

int fabbonaci (int numero){

	if(numero == 0){
		return numero;
	}else{
		return fabbonaci(numero-1)+numero;
	}


}



