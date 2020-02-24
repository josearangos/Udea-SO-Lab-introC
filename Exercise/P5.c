#include <stdio.h>
int factorial(int n){
        int resultado=1;
    if(n>0 && n!=1){
        resultado=n*(n-1);
        resultado=resultado*factorial(n-2);
    }   
    return resultado;
}
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

float Suma_Series(int x, int n){
    int exponente=(n-1)*2;
    float resultado=0.0;
    if((n-1)>0){
        resultado=potencia(x,exponente);
        resultado=resultado/(factorial((n-1)*2));
        if((n-1)%2!=0){
            resultado=resultado*(-1);
        }
        resultado= resultado + Suma_Series(x,n-1);     
    }
    else{
        resultado=resultado+1;
    }
    return resultado;
}
int main() {
   float resultado=Suma_Series(2,5);
   printf("Valor de X=2 y N=5\n %f \n",resultado);
   return 0;
}