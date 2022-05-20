#include <stdlib.h>
#include <stdio.h>


void factorial(){
	float numero, factorial=1;
	int seleccion, i=1;
	printf("\n En este programa vamos a hallar el factorial de un numero\n\n");
	printf("\n Desea calcular el factorial de algún numero positivo\n 1. Si\n 2. No\n\n");
	scanf("%d", &seleccion);			
	if (seleccion ==1){
		printf("\n Ingrese un numero para hallar su factorial:\t");
		scanf("%f", &numero);
		
		for (i >=1; i <= numero; i++){			
			factorial = factorial*i;				
		}
		printf("\n El resultado del factorial del numero %0.2f es : %0.2f \n\n", numero, factorial);		
	}
	else{		
		printf("\n Programa finalizado");	
	}	
}
	
