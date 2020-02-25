#include <stdio.h>
#include <stdlib.h>

int Count_Digits(int num){
    int count=1;
    while(num/10>0)
        {
            num=num/10;
            count++;
        }
        return count;

}
void strreverse(char* begin, char* end)
{  
    char aux;  
    while(end>begin)   
        aux=*end, *end--=*begin, *begin++=aux; 
}
void IntToStrr(int value, char *str)
{
    char* wstr=str;
    int sign;  
   
    if ((sign=value) < 0) value = -value;
   
    do {   
      *wstr++ = (value%10)+'0';
    }while(value=value/10);
   
    if(sign<0) *wstr++='-';
    *wstr='\0';

    //strreverse(str,wstr-1);
}
int main() {
    int number=7631;
    int count=1;
    char numeros[10];
    int length=Count_Digits(number);
    char *str=numeros;
    IntToStrr(number,str);
    int x = atoi(str);
    while(count<=length){
    printf("\n El valor del caracter es %c ",*str);
    *str++;
    count++;
    }
    printf("\n Convirtiendo a int: %d\n", x);
    //printf("Valor de X=2 y N=5\n %f \n",resultado);
    return 0;
}