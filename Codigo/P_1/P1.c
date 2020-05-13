#include <stdio.h>

/*
P1. El propietario de Harry’s Car Sales paga a cada vendedor una comisión basada en sus ventas trimestrales. Los rangos de ventas y las correspondientes tasas son mostrades en la tabla que aparece a continuación:
Ventas trimestrales ($) 	Comisión
0 - 20000 	Multiplicar las ventas por 5%
20001-50000 	Multiplicar la ventas sobre 20000 por 7% y entonces agregue 1000 al resultado
50001 o mas 	Multiplicar la ventas sobre 50000 por 10% y entonces agregue 3100 al resultado

Teniendo en cuenta lo anterior lleve a cabo las siguientes tareas:

    Comprenda el problema y realice casos de obteniendo las comisiones para los siguientes valores de ventas: 20000, 20001, 30000, 50000, 50001, 75000, y –3.
    Codifique el algoritmo en C de modo que permita el calculo de las comisiones. Lleve a cabo las pruebas con los casos de test elegidos en el item anterior.

*/

int ventas[7]={20000, 20001, 30000, 50000, 50001, 75000,-3};
float comision(int venta);

int main(){
    for(int i=0; i<7; i++){
	float comi = comision(ventas[i]);
       	   printf("%2f\n",comi);
	   //printf("%d \n",);
	}   
  return 0;
}

float comision(int venta){
	float c = 0;     
 	if (venta>=0 && venta<=20000){
		c= venta*0.05;
	}else if(venta>=20001 && venta<=50000){
		float f = (float)venta/20000;
		c = (f*0.07)+1000;
	}
	else if(venta>=50001){
		float f = (float)venta/50000;
		c = (f*0.1)+3100;
	}else{
		
	}    

    return c;
}

