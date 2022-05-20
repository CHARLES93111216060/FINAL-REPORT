#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void calculadoraTrigonometrica (){
	
	int eleccion1, eleccion2, eleccion3, start;
	float adyacente, hipotenusa, opuesto;
	printf("\n Welcome to trigonometric calculator\n\nPress some key to start...........\n\n");
	
	system("pause");
	while (true){
	printf("\n ¿Do you have some triangle to start? \n 1. Yes \n 2. No\n");	
		scanf("%d", &start);
		if (start == 1){
			printf("¿Your triangle is a triangle rectangle?\n 1. Yes\n 2. No\n\n");
			scanf("%d", &eleccion1);
			system ("cls");
			switch (eleccion1){
				case 1:
					{
					printf("\n ¿Do you wish to know a triangle's side?\n\n 1. yes\n 2. No\n\n");
					scanf("%d", &eleccion2);			
						if (eleccion2 == 1){
							printf("\n ¿What side do you want to know? \n1. Hypotenuse \n 2. Hick Adjacent \n 3. Hick Opposite\n\n ");
							scanf("%d", &eleccion3);
							switch(eleccion3){
								case 1:
									printf("\n Enter hick adjacent: \t");
									scanf("%f", &adyacente);
									printf("\n Enter hick opposite: \t");
									scanf("%f", &opuesto);
									hipotenusa = sqrt(pow(adyacente,2)+pow(opuesto,2));
									printf("\n \n The hypotenuse's value is %0.2f with hick adajacent value = %0.2f and hick opposite = %0.2f\n\n", hipotenusa, adyacente, opuesto);
									break;
								case 2:
									printf("\n Enter hypotenuse: \t");
									scanf("%f", &hipotenusa);
									printf("\n Enter hick opposite: \t");
									scanf("%f", &opuesto);
									adyacente = sqrt(pow(hipotenusa,2)-pow(opuesto,2));
									printf("\n \n The hick adjacent value is %0.2f with hypotenuse value = %0.2f and hick opposite = %0.2f\n\n", adyacente, hipotenusa, opuesto);
									break;
								case 3:
									printf("\n Enter hypotenuse: \t");
									scanf("%f", &hipotenusa);
									printf("\n Enter hick adjacent: \t");
									scanf("%f", &adyacente);
									opuesto = sqrt(pow(hipotenusa,2)-pow(adyacente,2));
									printf("\n \n The hick opposite value is %0.2f with hypotenuse value = %0.2f and hick adjacent = %0.2f\n\n", opuesto, hipotenusa, adyacente);
									break;
								default:
									printf("\n  Wrong select option, please rectify your selection\n\n ");						
							}						
						}
						else {
							printf("\n If you do not wanna know a triangle's side then, you want to know one triangle's angle\n");
							printf("\n But in this moment this option is unable\n Thanks for use our services\n\n");
						}}
						break;
				case 2:
					printf("\n If you selected this option, that's mean that your triangle have an angle more than 90 grades\n\n");
					printf("But in this case i can't  to help you because my creator don't ended my programation\n\n");
					break;
				default:
					printf("\n  Wrong select option, please rectify your selection\n\n ");	
			}		
		} else{
			printf("\n\n End of the program, eat a bread with coffee, read a book and recover panama\n\n");
			break;
		}
	}	
}