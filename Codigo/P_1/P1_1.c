#include <stdio.h>

/*
P1. Escriba un programa en C para desplegar la tabla de multiplicación desde 1 hasta N.

Test de entrada:

Numero final (empezando de 1): 8

Salida esperada:

Tabla de multiplicación desde 1 hasta 8:

1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
...
1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80


*/

void multi_table(int N);
int TABLE = 8;

int main(){
  multi_table(10);   
  return 0;
}

void multi_table(int N){
	for(int i = 1; i<=N; i++){
		for(int j = 1;j<=8;j++){
			int result = i*j;
				printf("%d%s%d%s%d%s",j,"X",i," = ",result,", ");

		}
		printf("\n");
	}


}


