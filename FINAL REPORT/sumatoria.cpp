
#include <stdio.h>
#include <math.h>

void sumatoria (){
	float x, y, numerador1, numerador2, denominador1, denominador2, resultado, promedio, sumatoria = 0 ;
	int seleccion, definir = 0 ;
	printf("\n Bienvenido a este programita para que se divierta un momentico:\n\n ");
	for(definir > 0  ; definir < 10000 ; definir++ ){
		printf ("\n\n Desea realizar alguna operacion definida en la siguiente sumatoria: (((((X^2)+3)/(Y-2)) + ((3X^2)/2Y))+10)\n\n 1. Si\n 2. No \n\n ");
		scanf ("%d", &seleccion);
		if (seleccion ==1){		
			printf("\n Ingrese el valor de X:\t");
			scanf("%f", &x);
			printf("Ingrese el valor de Y, tenga en cuenta que el valor que ingrese debe ser diferente de 2 y menor a 10: \t");
			scanf ("%f", &y );
			if (y>0 and y!=2 and y <=10){					
				numerador1 = (pow(x,2)+3);
				denominador1 = (y-2);
				numerador2 =(3*pow(x,2));
				denominador2 = (2*y);
				resultado = (((numerador1/denominador1)+(numerador2/denominador2))+10);
				sumatoria = ((sumatoria + resultado));			
				printf("El resultado de la operación es %0.2f, con valores de X = %0.2f y  Y = %0.2f\n\n ", resultado, x, y, promedio);						
			}
			else{
				printf("\n\n Valor ingresado de Y no cumple con los requisitos que se solicitan\n\n");
			}		
		}
		else{
			promedio = sumatoria/definir;
			printf ("\n\n El promedio de los resultados de los valores ingresados es: %0.2f y la sumatoria de los resultados es igual a %0.2f con %i iteraciones", promedio, sumatoria, definir);
			printf("\n\n Ya que terminamos, el programa se esta cerrando, coma pan con jamon, lea un libro, y recupere panamá: \n \n");
			break;
		}		
	}
}
