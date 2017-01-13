/*
	Fabonacci para un numero 


	Implementacion normal
*/
#include <stdio.h>


void retardo(int t);



int main(){


	int cont=0,x;

	printf("Introduce un numero para sacar el fabonacci\n");
	scanf("%d",&x);


	for (int i = x; i >=0 ; --i)
	{
		Sleep(50000);
		printf("%d\n",i);
		cont += i;

	}


	printf("El resultado del fabonacci es =%d\n", cont);


	return 0;
}


void retardo(int tiempo){
	for (int i = 0; i < tiempo*100; ++i)
	{
	}
}
