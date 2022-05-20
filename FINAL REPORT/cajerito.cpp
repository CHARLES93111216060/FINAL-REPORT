
#include <stdlib.h>
#include <stdio.h>

void cajerito(){
	int clave = 2139, eleccion, contador, seleccion, monto, restante;
	long contrasena, usuario = 1106783030, ingreso, saldo = 28258865;
	printf( "\n Bienvenido al banco del pueblo y para el pueblo donde le tenemos tasas de 120% E.A. en intereses en sus cuentas de ahorros, !aqui si gana¡ :\n\n");
	while (true){	
		printf( "\n\nDesea realizar algun tipo de operación\n\n Elija una opcion\n 1. Si\n 2. No\n\n");
		scanf("%d", &eleccion);
		if (eleccion == 1){			
			printf( "\n Ingrese su usuario: \t");
			scanf("%d", &ingreso);
			if(ingreso == usuario){
				printf( "\n Ingrese su clave: \t");
				scanf("%d", &contrasena);
				if (contrasena != clave){
					printf( "\n\n Contraseña erronea, reiniciando central. . . . ");	
					system ("pause");
					printf( "\n Transaccion terminada, espero tenga buen dia");	
					break;
					exit;						
				}
				else{
					printf( "\n Su saldo es de %d COP \n  ¿Desea realizar un retiro?\n 1. Si\n 2. No\n\n", saldo);
					scanf("%d", &seleccion);
					switch (seleccion){
						case 1:
							printf( "\n ¿Cuanto dinero desea retirar?: \t");
							scanf("%d", &monto);
							restante = saldo - monto;
							printf( "\n\n Estamos precesando su solicitud\n");
							system("pause");
							system ("cls");
							if (restante < 0){
								printf( "\n\n Saldo insuficiente\n\n");
								printf( "\n Transaccion terminada, espero tenga buen dia");
								break;
								exit;
							}
							else{
							printf( "\n Solicitud aceptada, valor de la transaccion, 0 COP\n\n Su nuevo saldo es de %d COP\n", restante);
							printf( "\n Tiene 5 segundo para retirar su dinero, de lo contrario se devolvera a su cuenta\n\n");
							printf( "\n Transaccion terminada, espero tenga buen dia");
							}		
							break;					
							exit;
						case 2:
							printf( "\n Transaccion terminada, espero tenga buen dia");
							break;				
							exit;
						default:
							printf( "\n\n Opcion no válida\n\n");
							system("pause");
							system ("cls");
					}
				}
			}else{
			printf( "\n\n Usuario inválido\n\n");
			system ("pause");
			system ("cls");		
			}			
		}
		else{
			printf( "\n Transaccion terminada, espero tenga buen dia");
			break;			
		}
	}
}
	