#include<stdio.h>
#include<stdlib.h>

void matrices(){
	int datos[5][5];
	int x, y, grande, positionx, positiony, posicion;
	float suma, promedio, sumita;
	
//llenando el arreglo de datos	
	x=0;
	y=0;	
	for(x=0;x<5;x++){
		for(y=0;y<5;y++){
			printf("\n Ingrese los datos de la posicion (%d, %d):\t", x+1, y+1);
			scanf("%d", &datos[x][y]);				
		}		
		printf("\n");
	}
	system("pasuse");
	system("cls");
//mostrando la matriz	
	x=0;
	y=0;
	grande = 0;
	printf("\n A\t B\t C\t D\t E\n");
	for(x=0;x<5;x++){
		for(y=0;y<5;y++){			
			printf("%d\t", datos[x][y]);
			if (grande<datos[x][y]){
				grande = datos [x][y];
				positionx = x+1;
				positiony = y+1;
			}
		}
		printf("\n");
	}
	
//sumando los números de la diagonal principal
	suma = 0;
	promedio = 0;
	x=0;
	y=0;
	for(x=0;x<5;x++){
		for(y=0;y<5;y++){
			if(x - y == 0){
				suma += datos[x][y];
				promedio = suma/5;				
		}
		}	
	}
	printf("\n\n El valor de la suma de la diagonal principal de la matriz es: %0.0f, con un promedio de %0.2f\n", suma, promedio);
	
//sumando los numeros de cada columna y mostrando el mayor valor
	x=0;
	y=0;
	suma = 0;
	promedio = 0;
	int mayor  = 0;
	posicion = 0;
	mayor = 0, sumita = 0;
	for(y=0;y<5;y++){
		for(x=0;x<5;x++){
			suma += datos[x][y];
		}
		printf("\n La suma de los datos de la columna %d es: %0.0f ", y+1, suma);		
		if (mayor < suma){
			mayor = suma;
			posicion = y+1;			
		}		
		sumita += suma;
		suma=0;
		promedio = sumita/5;
	}
	printf("\n\n El mayor valor de las sumatorias de las columnas es %d y se encuentra en la columna %d\n ",mayor, posicion);
	printf("\n El promedio de los datos de la matriz es: %0.2f \n", promedio);
	
//El numero mas grande de la matriz
	printf("\n El numero mas grande que tiene la matriz es %d y se encuentra en la posicion (%d, %d)\n", grande, positiony,positionx );
	printf("\nFin del programa, por favor compre pan en tostao y me da un pedacito");
	
//Final del programa                                                                                                                       By Carlos Alberto Romero Lozano
																																		//progamador Universidad Pontificia Bolivariana

}







