#include <stdio.h>
int multiplo(int valor1, int valor2){
    int resultado;
    if (valor2%valor1==0)
    {
        resultado=1;
    }
    else
    {
        resultado=0;
    }
    return resultado;

}
int main() {
   int resultado=multiplo(5,164);
   printf("%d \n",resultado);
   resultado=multiplo(5,165);
   printf("%d \n",resultado);
   return 0;
}