#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

 

using namespace std;

int consultarSaldo(int iSaldo);
int retirarEfectivo(int retira, int iSlado);
int pagoServicios(int iSaldo);
bool verificarSlado (int iSaldo, int iCantidad);
int operacionPagServ(int iSaldo, int iCantidad);
 

int main()
{
    int iCantidad=0, iop=0 , iSaldo = 45000;
    
    do{
    printf ("\n1.- Consultar Saldo  \n");
    printf ("2.- Retirar Efectivo  \n");
    printf ("3.- Pagar servicios  \n");
    printf ("4.- Salir:\n");
    printf ("Selecciona una opcion del menu : \n");
    fflush(stdout); 
    scanf ("%d", &iop);
    
     switch (iop)
    {
           case 1:
                consultarSaldo(iSaldo);
                break;
           case 2:
                printf("Ingresa cuanto se va a retirar (maximo 5000, minimo 50): \n");
                scanf("%i", &iCantidad);
				iSaldo = retirarEfectivo(iSaldo, iCantidad);
                break;
           case 3:
                do{
    			printf ("\n3,1.- Luz  \n");
    			printf ("3,2.- Agua  \n");
    			printf ("3,3.- Telefono  \n");
    			printf ("3,4.- Cable:\n");
    			printf ("3,5.- Celular:\n");
    			printf ("4.- Salir:\n");
    			printf ("Selecciona una opcion del menu : \n");
    			fflush(stdout); 
    			scanf ("%d", &iop);		
			case 4:
				printf("¿Estas seguro de salir del programa?, \n 1.- Si \n 2.- No \n");
				scanf("%i", &iop);
				
				if (iop == 1) {
					iop = 4;
					printf("Confirmo salida del programa gracias por participar");
					
				} else {
					iop = iop;
				}
				break; 
				
				
           default:
                  printf("Opcion no encontrada, elija de nuevo por favor"); 
                   break;
      }
    } while (iop != 4);
     Sleep(1000);
    
    return 0;
    
}

int consultarSlado(int iSaldo) {
	printf("Su saldo actual es: \n %i", iSaldo);
	return 0;
}

int retirarEfectivo(int iSaldo, int iCantidad){
	if (iSaldo > iCantidad){
		if (iCantidad > 5000)
		printf("VALOR NO VALIDO");
	}else if (iCantidad < 50) {
		printf("VALOR NO VALIDO");
	}else{
		iSaldo = iSaldo - iCantidad;
	}
} else {
	printf("Transaccion no posible");
}
return iSaldo; 


