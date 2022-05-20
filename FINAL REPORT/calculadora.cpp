#include <stdio.h>

void calculadora (){
	int valor1, valor2, suma, multiplicacion, resta, division, operacion;
	printf("\n Bienvenido a esta calculadora\n");
	printf("Operaciones de la calculadora\n");
	printf("Digite 2 valores enteros positivos antes de seleccionar la operacion:\n");
	scanf("%i %i", &valor1, &valor2);
	if (valor1>=0 and valor2>=0){
		printf("\n Seleccione la operacion que desea realziar con los numeros ingresado:\n");
		printf(" 1. Suma\n 2. Resta\n 3. Multiplicacion\n 4. Division\n");
		scanf("%d", &operacion);
		switch(operacion){
			case 1:
				suma = valor1 + valor2;
				printf("\n La suma de los numeros ingresados es: %i", suma);
				break;
			case 2:
				resta = valor1 - valor2;
				printf ("\n La resta de los numeros ingresados es: %i", resta);
				break;
			case 3:
				multiplicacion = valor1 * valor2;
				printf ("\n La multiplicacion de los n?meros ingresados es: %i", multiplicacion);
				break;
			case 4:
				division = valor1 / valor2;
				printf ("\n La division de los n?meros ingresados es: %i", division);
				break;
			default:
				printf("\n La operacion seleccionada no existe\n");
				}
	}else{
		printf("Revise los numeros ingresados, estos deben ser positivos");
	}
}
