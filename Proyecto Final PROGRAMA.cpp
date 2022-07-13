#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

 

using namespace std;

 

int main()
{
    int iop, in1, in2, in3, ir, ir2, divisor = 1, divisores = 0, cin;
    float fRaiz;
    do{
    printf ("\n1.- Celcius a Fahrenheit  \n");
    printf ("2.- Millas a Kilometros  \n");
    printf ("3.- Pulgadas a Centimetros  \n");
    printf ("4.- Yardas a Metros \n");
    printf ("5.- Convertir pies a centimetros \n");
    printf ("6.- Salir:\n");
    printf ("Selecciona una opcion del menu : \n");
    fflush(stdout); 
    scanf ("%d", &iop);
    
     switch (iop)
    {
           case 1:
                printf("Ingresa el valor de Fahrenheit por favor: \n");
                scanf("%d", &in1);               
                ir = (in1 -32) / 1.8;
                printf("El valor en Celsius es: \n %i", ir);
                break;
           case 2:
                printf("Ingresa el valor de las millas por favor: \n");
                scanf("%d", &in1);
				ir = in1 * 1.609;
				printf("El valor en Kilometros es: \n %i", ir);						
                break;
           case 3:
                printf("Ingresa el valor de las Pulgadas : \n");
                scanf("%d", &in1);               
                ir = in1 * 2.54;
                printf("el equivalente en centimetros es: \n %i", ir);
                break;
           case 4:          
                printf("Ingresa las yardas por favor: \n");
                scanf("%d", &in1);
                ir = in1/1.094;
                printf("El equivalante en metros es: \n %i", ir);
                break;   
			case 5:
				printf("Ingresa el valor en pies por favor: \n");
				scanf("%i", &in1);				
				ir = in1 * 30.48;
				printf("el valor en metros es: \n %i", ir);
				break;			
			case 6:
				printf("¿Estas seguro de salir del programa?, \n 1.- Si \n 2.- No \n");
				scanf("%i", &iop);
				
				if (iop == 1) {
					iop = 6;
					printf("Confirmo salida del programa gracias por participar");
					
				} else {
					iop = iop;
				}
				break; 
				
				
           default:
                  printf("Opcion no encontrada, elija de nuevo por favor"); 
                   break;
      }
    }while (iop != 6);
     Sleep(1000);
    
    return 0;
    
}
