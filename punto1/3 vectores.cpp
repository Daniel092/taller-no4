/*27/08/2018
programa: crear 3 arreglos y llevar un procedimiento en cada uno de ellos
presentador por: Daniel Steven Agudelo Fernandez
*/

#include <iostream>

//funcion principal
int main(int argc, char *argv[]) {
	//arreglos declarados
	int num1[5], num2[5], num3[10];
	//variables declaradas
	int i;
	//ciclos for para asignar, multiplicar y imprimir
	for(i=0;i<5;i++){
		printf("ingrese 5 numeros\n");
		scanf("%d", &num1[i]);
	}
	for(i=0;i<5;i++){
		num2[i] = (num1[i]*2);
		printf("\n %d \n",num2[i]);
	}
	
	for(i=0;i<5;i++){
		num3[i]= num1[i];
		printf("\n %d \n",num3[i]);
	}
	
	for(i=0;i<5;i++){
		num3[5+i]= num2[i];
		printf("%d \n", num3[5+i]);
	}
	
	

	
	
	
	return 0;
}
