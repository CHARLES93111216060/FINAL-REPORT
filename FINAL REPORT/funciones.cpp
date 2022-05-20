#include <stdio.h>

void presentacion(){
	printf("\n Bienvenido al programa de final de semestre para pensamiento algoritmico\n");
	printf("\n Por favor escoja alguna de las siguientes opciones para ejecutrar alguno de los programas:\n");
	printf("\n 1. Tiempo de vuelo de tu nave espacial a la velocidad de la luz \n 2. Conversion de temperatura de fareheit a celsius y viceversa\n");
	printf(" 3. Calculadora\n 4. Arreglos\n 5. Matrices \n 6. Notas de 5 estudiantes \n 7. Calculadora trigonometrica\n");
	printf(" 8. Factorial de un numero \n 9. Sumatoria\n 10. Retirar dinero\n ----------");
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void starship (){
	float distance;
	float time;
	float lightSpeed = 299792.458;
	printf("\n Welcome to this NASA'S program to know the starship travel time \n");
	printf ("\n Write the distance that you want to travel in kilometers: \t");
	scanf("%f", &distance);
	time = distance/lightSpeed;
	printf("\n The starship trek time is %0.2f seconds, traveling %0.2f kilometers with light speed %f kilometers by second\n", time, distance, lightSpeed );	
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void temperatura (){
	int seleccion;
	float farenheit, celsius;
	printf("\n Bienvenido a esta convertidor de temperatura\n");
	printf("\n Si desea convertir de Farenheit a Celsius, presione 1\n Si desea convertir de Celsius a Farenheit presione 2\n ");
	scanf("%d", &seleccion);
	switch(seleccion){
		case 1:
			printf("\n Ingrese la temperatura en Farenheit:\t");
			scanf("%f", &farenheit);
			celsius=(5*(farenheit-32)/9);
			printf("\n La temperatura %0.3f farenheit convertida a celsius es: %0.3f, como ya terminamos, circule, circule, y no joda tanto", farenheit, celsius);	
			break;
		case 2:
			printf("\n Ingrese la temperatura en Celsius:\t");
			scanf("%f", &celsius);
			farenheit=(((9*celsius)/5)+32);
			printf("\n La temperatura %0.3f Celsius son %0.3f Farenheit", celsius, farenheit);	
			break;
		default:
			printf("\n La opcion seleccionada no es valida\n");
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

