#include <stdio.h>
#include <string.h>

void secuence(int renglones){
	char marct[renglones];
	int marcador=1;
	for(int i=1;i<=renglones;i++){
		int j=0;
		int marc[i];
		while(j<i){
			marc[j]=marcador;	
			//printf ("%d",marcador);
			if(marcador==1){
			marcador=0;
			}
			else {
		  	  marcador=1;
			}
			j++;
		}
		for(int k=i-1;k>=0;k--){
			printf("%d",marc[k]);
		}
		printf("\n");		
		marcador=1;
	}
}
int main() {
   secuence(10);
   return 0;
}