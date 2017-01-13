//encrar 100 numeros consecutivos que 
//no son cuadrados perfectos 
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
int isCuadPerfect(int x);

int main(int argc, char const *argv[])
{
	int c=0, x=0,pendejo=0;
		


	printf("hola como estas 2 \n");
	for (;;x++)
	{
		printf("numero = %d ",x);
		printf("%d && %d == %d \n",!isCuadPerfect(x),pendejo,c);
		if(!isCuadPerfect(x) && pendejo == c){
			c++;
			pendejo++;
		}else
			c=pendejo=0;
		
		if(c==100){
			printf("si hay\n");
			break;
		}

	}



	return 0;
}

/*
int main(int argc, char const *argv[])
{
	long double x = pow(2*pow(10,500)+15,.5);

	printf("%\n", x);
	return 0;
}
*/
int isCuadPerfect(int x){
	double d = pow(x,0.5);
	double u,*ux=&u;


	return (modf(d,ux)==0)?1:0;
}