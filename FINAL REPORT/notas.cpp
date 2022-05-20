
#include<stdlib.h>
#include<iostream>
#include<string.h>

void notas(){
	printf("\nBienvenido a la mejor forma de sacar las notas de sus alumnos\n");
	float n1[5],n2[5],n3[5]={1,2,3,4,5},def[5],suma=0,prom=0, sumaCurso = 0, promCurso=0, individual[5], mayor, menor, notas;
	char nombres[5][30];
	int y,cont=0;
	for(y=0;y<5;y=y+1){
		printf("\nIngrese el nombre del estudiante %d:\t ",y+1);
		//scanf("%s", &nombres[y]);
		gets(nombres[y]);		
	}	
	
	//ingresando las notas del primer corte de los estudiantes
	y=0;
	do	{
		printf("\nDigite nota 1 del estudiante %d: ",y+1);
		scanf("%f",&n1[y]);
		while(n1[y]<0||n1[y]>5){			
			cont++;
			printf("\nDigite nota 1 del estudiante %d: ",y+1);
			scanf("%f",&n1[y]);
			if(cont==3)
			  exit(0);
		}
		y++;
	}while(y<=4);
	
	//ingresando las notas del segundo corte de los estudiantes
	y=0;
	while(y<5)	{
		printf("\nIngrese la nota 2 del estudiante %d:\t",y+1);
		scanf("%f",&n2[y]);
		while(n2[y]<0||n2[y]>5){			
			cont++;
			printf("\nDigite nota 2 del estudiante %d:\t ",y+1);
			scanf("%f",&n2[y]);
			if(cont==3)
			  exit(0);
		}
		y++;
	}
	
	//ingresando las notas del tercer corte de los estudiantes
	y=0;
	while(y<5)	{
		printf("\nIngrese la nota 3 del estudiante %d:\t",y+1);
		scanf("%f",&n3[y]);
		while(n3[y]<0||n3[y]>5){			
			cont++;
			printf("\nDigite la nota 3 del estudiante %d:\t ",y+1);
			scanf("%f",&n3[y]);
			if(cont==3)
			  exit(0);
		}
		y++;
	}	
	
	system("pause");
	system("cls");
	
	//imprimiendo las notas de los estudiantes
	printf("\nLas notas de los estudiantes fueron:\n");	
	y=0;
	for(y>=0; y<5;y++){		
		printf("\n %d.\t%s %0.2f %0.2f %0.2f\n",y+1, nombres[y], n1[y], n2[y], n3[y]);		
	}
	
	//promedio por corte de cada estudiante
	y=0;
	for(y=0;y<=4;y++){
		suma=suma+n1[y]+n2[y]+n3[y];
		prom=suma/3;
		printf("\nEl promedio de las notas del corte del estudiante %s es %0.2f\n",nombres[y], prom);
		individual[y]=prom;
		suma=0;
		prom=0;
	}
	
	//El mejor estudiante fue:
	y=0;
	mayor=0;
	for(y=0;y<=4;y++){	
		if(individual[y]>mayor){
			mayor = individual[y];	
			printf("\n \n El mejor estudiante es %s, con un promedio de %0.2f, con notas %0.2f, %0.2f, %0.2f \t",nombres[y],mayor, n1[y], n2[y], n3[y] );		
		}
	}
	//El peor estudiante fue:
	y=0;
	menor=5;
	for(y=0;y<=4;y++){	
		if(individual[y]<menor){
			menor = individual[y];	
			printf("\n \nEl peor estudiante es %s, con un promedio de %0.2f, con notas %0.2f, %0.2f, %0.2f \t",nombres[y],menor, n1[y], n2[y], n3[y] );		
		}
	}	
	//promedio de notas del curso
	y=0;
	for(y=0; y<=4; y++){
		sumaCurso += n1[y]+n2[y]+n3[y];		
		promCurso=sumaCurso/15;
	}
	printf("\n\nEl promedio de las notas del curso es %0.2f\n\n",promCurso);
	
	//Estudiantes por encima del promedio
	y=0;
	for(y=0; y<=4; y++){
		if(individual[y]>promCurso){
			printf("\n\n El estudiante que esta por encima del promedio es %s",nombres[y]);
		}
	}
		
	//estudiantes que predieron
	y=0;
	for(y=0;y<=4;y++){
		if(individual[y]<3){
			printf("\n\n El estudiante que perdio es %s",nombres[y]);
		}
	}
}