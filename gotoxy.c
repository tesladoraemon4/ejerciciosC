

#include <stdio.h>
#include <math.h>

int main()
{



	int n=11,x=0,espaciosBlanco=0; //Tanamio de asteriscos 
	



	int numAsteriscos = n-2*x;

	printf("\n");

	while( numAsteriscos > 0){//Repetir hasta que no haya asteriscos 

		for (int i = 0; i < numAsteriscos; ++i)//Imprime el numero n de asteriscos
		{
			printf("*");
		}

		printf("\n");//hace un salto de linea 


		espaciosBlanco++;

		for (int i = 0; i < espaciosBlanco; ++i)
		{
			printf(" ");
		}

		x++;
		numAsteriscos = n-2*x;

	}

	char ultimo = (n%2==0)?'*':' ';


	printf("%c\n",ultimo);



	return 0;

}


