
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

void arreglos(){
	int tam,i;
	printf("\nDIGITE EL TAMAÑO DE LOS ARREGLOS: \t ");
	scanf("%i",&tam);
	int a[tam],b[tam],c[tam],d[tam];

//guardando los datos en el arreglo a//////////////////////////////////////////////////////////////////////////////////////////
	for(i=0;i<tam;i=i+1){
		printf("\n Digite el valor del arreglo A en posicion %d: \t",i+1);
		scanf("%d",&a[i]);
	}
	
//mostrando los datos del arreglo a//////////////////////////////////////////////////////////////////////////////////////////
	i=0;
	printf("\n Los elementos del arreglo a son:\t");
	for(i=0; i<tam; i++){
		printf("%d\t", a[i]);
	}
	system("pause");
	system("cls");

//guardando los datos en el arreglo b//////////////////////////////////////////////////////////////////////////////////////////
	i=0;
	do{
		printf("\n Digite el valor del arreglo B en posicion  %d: \t",i+1);
		scanf("%d",&b[i]);
		i++;
	}while(i<tam);	
//mostrando los datos del arreglo b//////////////////////////////////////////////////////////////////////////////////////////
	i=0;
	printf("\n Los elementos del arreglo a son:\t");
	for(i=0; i<tam; i++){
		printf("%d\t", b[i]);
	}
	system("pause");
	system("cls");
//guardando los datos en el arreglo c//////////////////////////////////////////////////////////////////////////////////////////
	i=0;
	do{
		if(a[i]>b[i]){
			c[i]=a[i];
		}
		else{
			c[i]=b[i];
		}
		i++;
	}while(i<tam);	
//mostrando los elementos del arreglo c//////////////////////////////////////////////////////////////////////////////////////////
	i=0;
	printf("\n Los elementos mas grandes entre ambos vectores son:\t");
	for(i=0; i<tam; i++){
		printf("%d\t", c[i]);
	}
//guardando los elementos del arreglo a en el arreglo d////////////////////////////////////////////////////////////////////////////
	i=0;
	for(i=0; i<tam; i++){
		d[i] = a[i];
	}	
//guardando los elementos del arreglo b en el arreglo d////////////////////////////////////////////////////////////////////////////
	i=0;
	for(i=tam; i<tam*2; i++){
		d[i] = b[i-tam];
	}
//mostrando los elementos del arreglo d//////////////////////////////////////////////////////////////////////////////////////////
	i=0;
	printf("\n Los valores de ambos arreglos son: \t");
	for(i=0; i<tam*2; i++){
		printf("%d\t", d[i]);
	}
//mostrando el promedio de los datos del arreglo a
	i=0;
	float promedio1=0, promedio2=0;
	float suma1=0, suma2=0;
	for(i=0; i<tam; i++){
		suma1 += a[i];
		promedio1=suma1/tam;
		suma2 += b[i];
		promedio2 = suma2/tam;
	}
	printf("\n\n El promedio de los valores ingresados en el arreglo A, es:\t %0.2f\n\n", promedio1);
	printf("\n El promedio de los valores ingresados en el arreglo B, es:\t %0.2f\n\n", promedio2);
}



