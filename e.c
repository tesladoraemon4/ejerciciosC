#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void sumArchivos(char *o,char *d);
void copiaBinarios(char *origen, char *destino);
void ejer(char *origen, int n);
void ejer3(char *origen);
int contPala(char *cad);
int main(int argc, char const *argv[])
{
	char x[]="r.txt";
	char y[]="destino.txt";
  ejer3(x);
	return 0;
}






int contPala(char *cad){  
  int x=0;
  for(;*cad!='\0';cad++){
    if(isspace(*cad) || !isprint(*cad))
      x++;
  }
  return x;
}

void ejer3(char *origen){

  FILE *archivo;
  archivo = fopen(origen,"rb");
  int contl=0,contLet=0,contPal=0;
  if(archivo==NULL){
    printf("algo salio mal\n");
  }

  char c,buf[100],*array=buf;
  while(!feof(archivo)){
    c=fgetc(archivo);
    if(c=='\n'){
      *array='\0';
      contl++;
      printf("%s\n", buf
        );
      contPal =contPala(buf);// = con


      array=buf;
    }else{
      *array = c;
      array++;
      contLet++;
    }
    
  }

  printf("Hay %i lineas\n", contl);
  printf("Hay %i palabras\n", contPal);
  printf("Hay %i caracteres\n", contLet);

  fclose(archivo);

}





void ejer(char *origen, int n){

  FILE *archivo;
  archivo = fopen(origen,"rb");

  if(archivo==NULL){
    printf("algo salio mal\n");
  }
  int numlines=0;
  while(!feof(archivo))
    if(fgetc(archivo)=='\n')
      numlines++;
  fclose(archivo);
  archivo = fopen(origen,"rb");
  printf("%i\n",numlines);
  char c,array1[10000],*array=array1;
  int num=0;
  while(!feof(archivo)){
    c=fgetc(archivo);
    if(c=='\n'){
      *array='\0';
      num++;
      if(numlines-n<num)
        printf("%s\n",array1);
      array = array1;
    }else{
      *array = c;
      array++;
    }
    
  }

  fclose(archivo);

}









void copiaBinarios(char *origen, char *destino){

	FILE *archivo;
	archivo = fopen(origen,"rb");
	FILE *des;
	des= fopen(destino,"wb");


  if(archivo==NULL || des == NULL){
    printf("algo salio mal\n");
  }

	char c;
	int num;
	while(!feof(archivo)){
		c=fgetc(archivo);
    fprintf(des, "%c", c);
	}

	fclose(archivo);

	fclose(des);
}


/*
  Suma el contenido de un archivo
  Ejemplo:
  Archivo.txt
  5 7 
  10  12
  Salida.txt
  5 + 7 = 12
  10 + 12 = 22
  Entre cada espacio tiene que haber tab

*/
void sumArchivos(char *origen, char *destino){

	 FILE *archivo;
	 archivo = fopen(origen,"rb");
	 FILE *des;
	 des= fopen(destino,"wb");

	if(archivo==NULL || des == NULL){
		printf("algo salio mal\n");
	}

	int x,y,result;
	fscanf(archivo,"%i\t%i",&x,&y);
	result = x+y;
	fprintf(des,"%i\t%i\t=%i\n",x,y,result);
	fscanf(archivo,"%i\t%i",&x,&y);
	result = x+y;
	fprintf(des,"%i\t%i\t=%i",x,y,result);

	fclose(archivo);

	fclose(des);
	
}