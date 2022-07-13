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
    printf ("\n1.-Numeracion de un numero X a Y  \n");
    printf ("2.- Identificar si un numero es primo  \n");
    printf ("3.- Calcular el area y perimetro de un triangulo  \n");
    printf ("4.- Calcular Velocidad \n");
    printf ("5.- Convertir centimetros a metros \n");
    printf ("6.- Salir:\n");
    printf ("Selecciona una opcion del menu : \n");
    fflush(stdout); 
    scanf ("%d", &iop);
    
     switch (iop)
    {
           case 1:
                printf("Ingresa un numero por favor: \n");
                scanf("%d", &in1);
                printf("Ingresa un numero por favor: \n");
                scanf("%d", &in2);
                if ( in1 <= in2 )
        		do
        		{
            	printf( "%d ", in1);
            	in1++;
        		} while ( in1 <= in2 );
    			else
       			 printf( "ERROR: %d no es mayor o igual que %d", in2, in1 );
                break;
           case 2:
                printf("Ingresa un numero por favor: \n");
                scanf("%d", &in1);
				do{
				if(in1 % divisor == 0){
				divisores++;
				}
				divisor++;
				}while(divisor <= in1);
				if(divisores == 2){
				printf("el numero es Primo. \n", in1);
				}else{
				printf("el numero no es Primo. \n", in1);
				}						
                break;
           case 3:
                printf("Ingresa la base por favor: \n");
                scanf("%d", &in1);
                printf("Ingresa la altura por favor: \n");
                scanf("%d", &in2);
                printf("Ingresa los lados por favor: \n");
                scanf("%d", &in3);
                ir = (in1 * in2) / 2;
                ir2 = in3+in3+in3; 
                printf("el Area del triangulo es: \n %i", ir);
                printf("\nel Perimetro del triangulo es: \n %i", ir2);
                break;
           case 4:          
                printf("Ingresa la distancia por favor: \n");
                scanf("%d", &in1);
                printf("Ingresa el tiempo por favor: \n");
                scanf("%d", &in2);
                ir = in1 / in2;
                printf("La velocidad es: \n %i", ir);
                break;   
			case 5:
				printf("Ingresa los centimetros por favor: \n");
				scanf("%i", &in1);
				
				ir = in1 / 100;
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
