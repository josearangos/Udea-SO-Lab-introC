#include <stdio.h>
int potencia(int base,int exponente){
    int exp = 1;
    int exps=0;

        exps=base;
        exp++;

        if(exp<=exponente){
            exps=exps*potencia(base,exponente-1);
        }
    return exps;
}

int Suma_Progresion(int x, int n){
    int resultado=0;
    if(n>0){
        resultado=potencia(x,n);
        resultado= resultado + Suma_Progresion(x,n-1);     
    }
    else{
        resultado=resultado+1;
    }
    return resultado;

}
int main() {
   int X=2;
   int N = 4;
   int resultado=Suma_Progresion(X,N);
   printf("x:%d \nn:%d \nsuma:%d",X,N,resultado);
   return 0;
}