#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"

//programa principal/////////////////////////////////////////////////////////////////////////////////
int main (){
	int option;
	presentacion();
	scanf("%d", &option);
	switch (option){
		case 1:
			starship();
			break;
		case 2:
			temperatura ();
			break;		
		case 3:
			calculadora ();	
			break;
		case 4:
			arreglos();
			break;
		case 5:
			matrices();
			break;
		case 6:
			notas();
			break;
		case 7:
			calculadoraTrigonometrica ();
			break;
		case 8:
			factorial();
			break;
		case 9:
			sumatoria();
			break;
		case 10:
			cajerito();
			break;
		default:
			printf("\n La opcion escogida no es válida\n");
	}
}