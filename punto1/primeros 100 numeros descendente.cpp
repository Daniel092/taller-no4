/*27/08/2018
programa: imprimir los primeros 100 numeros de forma descendente
presentado por: Daniel Steven Agudelo Fernandez
*/


#include <stdio.h>

//funcion principal
int main(int argc, char *argv[]) {
	//declarcion del arreglo
	int num[100];
	//declaracion de variables
	int i=0;
	//ciclos for
	for(i=0;i<=99;i++){
		num[i]= i+1;
	}
		for(i=99;i>=0;i--){
		printf("%d\n", num[i]);
	}
	
	
	return 0;
}

