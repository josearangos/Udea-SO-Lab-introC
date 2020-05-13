#include <stdio.h>
#include <stdlib.h> //rand() y srand()
#include <time.h>   //time()
    #include <string.h>


int mayor(int num1, int num2);
int menor(int num1, int num2);
int generar_aleatorios(int num1, int num2);
void imprimir_moneda(int lado);
void menu();
void aleatori_msg(int type);


int main (void) {
    srand(time(NULL)); //genera la semilla
   
    menu();

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

int generar_aleatorios(int num1, int num2) {
    int num, M, m;
    
    M = mayor(num1, num2);
    m = menor(num1, num2);    
    num = rand()%(M - m + 1) + m;
    return num;
}


void menu(){
    int N1, N2, R, exit_response,respuesta;

    do{
        N1 = generar_aleatorios(0,9);
        N2 = generar_aleatorios(0,9);
        R = N1*N2;
        printf("Cuanto es %d veces %d ", N1,N2);
        printf("Digite su respuesta: ");
        scanf("%d",&respuesta);
        while (respuesta !=R){
            aleatori_msg(0);
            printf("Por favor intenta nuevamente:");
            scanf("%d",&respuesta);          
        }
        aleatori_msg(1);
        printf("Marque 0 para salir o cualquier otro número para seguir: ");
        scanf("%d",&exit_response);
    }while (exit_response != 0);

}


void aleatori_msg(int type){

    
   char saludos[8][31] = {
                                 "Muy bien!",
                                 "Excelente!",
                                  "Buen trabajo!",
                                  "Sigue haciéndolo bien!",
                                  "No. Por favor trata de nuevo.",
                                  "Incorrecto. Trata una vez más",
                                  "No te rindas!",
                                  "No. Trata de nuevo"
                              };
   


    int n_msg;
    //Mensajes negativos aleatorios
    if(type ==0){
        n_msg = generar_aleatorios(4,7);
    //Mensajes positivos aleatorios
    }else{
        n_msg = generar_aleatorios(0,3);
    }

     printf(" %s \n", saludos[n_msg]);


}