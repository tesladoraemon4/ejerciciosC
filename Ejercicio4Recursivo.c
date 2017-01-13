
/*
	fabonnacci
	implementacion recursiva
	
*/

#include  <stdio.h>

int fabonnacci(int x);

int main(){

	int x;

	printf("Introduce un numero para sacar el fabonacci\n");
	scanf("%d",&x);


	printf("%d\n", fabonnacci(x));



	return 0;
}


int fabonnacci(int x){

	if(x==0){
		return 0;
	}else if(x==1){
		return 1;
	}else{
		return fabonnacci(x-1) + x;
	}
}