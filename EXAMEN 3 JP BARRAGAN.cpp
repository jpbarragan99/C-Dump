#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

using namespace std;

float HorasMinutos (float iHora, float iMinuto);
float DolarPeso (int iDolar, int iPM);
float EuroPeso (int iEuro, int iPM);
float IMC (float iPeso, float iAltura);
float Potencia (int iNum, int iBase);

int main()
{
    int iop, iNum, iDolar, iPM, iEuro, iBase; 
    float iPeso, iAltura, iHora, iMinuto, iIMC, ir;
    
    do{
    printf ("\n1.- Horas a Minutos  \n");
    printf ("2.- Dolar a Peso  \n");
    printf ("3.- Euro a Peso  \n");
    printf ("4.- Calcular el indice de masa corporal en sistema metrico \n");
    printf ("5.- Calcular la potencia de un numero negativo \n");
    printf ("6.- Salir:\n");
    printf ("Selecciona una opcion del menu : \n");
    fflush(stdout); 
    scanf ("%d", &iop);

     switch (iop)
    {
           case 1:
                printf("Ingresa el valor de las horas por favor: \n");
                scanf("%f", &iHora);               
                iMinuto = HorasMinutos(iHora, iMinuto);   
				printf("Los minutos son: \n %i", iMinuto);             
                break;
           case 2:
                printf("Ingresa el valor de los dolares por favor: \n");
                scanf("%i", &iDolar);
				DolarPeso;		
				iPM = 
				printf("El equivalente en pesos es: \n %i", iPM);			
                break;
           case 3:
                printf("Ingresa el valor de los Euros por favor : \n");
                scanf("%f", &iEuro);               
                EuroPeso;
                printf("El equivalente en pesos es: \n %d", iPM);
                break;
           case 4:          
                printf("Ingresa el peso por favor: \n");
                scanf("%f", &iPeso);
                printf("Ingresa la altura por favor: \n");
                scanf("%f", &iAltura);
                IMC;
                printf("El IMC es: \n %d", iIMC);
                break;   
			case 5:
				printf("Ingresa el numero negativo por favor: \n");
				scanf("%i", &iNum);				
				printf("Ingresa el numero de potencias por favor: \n");
				scanf("%i", &iBase);
				Potencia;
				printf("El resultado es: \n %i", ir);
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
     Sleep(10000);
    
    return 0;
    
}

float HorasMinutos (float iHora, float iMinuto) {
		iMinuto = iHora * 60;
}

float DolarPeso (int iDolar, int iPM) {
	iPM = iDolar * 22.78;
}

float EuroPeso (int iEuro, int iPM) {
	iPM = iEuro * 26.83;	
} 

float IMC (float iPeso, float iAltura, float iIMC) {
	iIMC = iPeso/(iAltura * iAltura);
}

int Potencia (int iNum, int iBase, float ir) {
	if (iNum > 0) {
		printf("VALOR NO VALIDO \n");
	}	
	ir = pow(iNum,iBase); 
}


