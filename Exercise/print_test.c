#include <stdio.h>
#include <stdlib.h> //rand() y srand()
#include <time.h>   //time()


int mayor(int num1, int num2);
int menor(int num1, int num2);
int generar_aleatorios(int num1, int num2, int num_aleatorios);

int main (void) {
    srand(time(NULL)); //genera la semilla
    int num_pares, min, max;
    printf("Digite los dos limites (minimo maximo): ");
    scanf("%d %d", &min, &max);
    
    num_pares = generar_aleatorios(min, max, 10);
    putchar('\n');
    printf("La cantidad de numeros pares generados es de: %d\n", num_pares);
    return 0;
}

int mayor(int num1, int num2) {
    if(num1 >= num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int menor(int num1, int num2) {
    if(num1 <= num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int generar_aleatorios(int num1, int num2, int num_aleatorios) {
    int cnt = 0, num, M, m;    
    M = mayor(num1, num2);
    m = menor(num1, num2);
    for(int i = 0; i < num_aleatorios; i++) {
        num = rand()%(M - m + 1) + m;
        if(num % 2 == 0) {
            cnt++;
        }
        printf("%d ", num);
    }    
    return cnt;
}