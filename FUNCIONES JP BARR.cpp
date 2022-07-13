#include<iostream>
#include<math.h>
 
int suma(int ina, int inb);
int resta(int ina, int inb);
int multiplicacion();
float division ();
int Potencia (int in1, int in2);
float raiz (int in1);


int main(){
    
int iop= 0, in1=0, in2=0;
float fop = 0, fl1 = 0, fl2 = 0;
do{
    printf("\n1. Suma \n");
    printf("2. Resta \n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("5. Potencia\n");
    printf("6. Raiz\n");
    printf("7. Salir\n");
    scanf("%i", &iop);
    
    switch(iop){
                
                case 1:                   
                     printf("Ingresa el primer numero: \n");
                     scanf("%i", &in1);
                     printf("Ingresa el segundo numero: \n");
                     scanf("%i", &in2);
                     suma(in1,in2);
                     break;
                case 2:
                     printf("Ingresa el primer numero: \n");
                     scanf("%i", &in1);
                     printf("Ingresa el segundo numero: \n");
                     scanf("%i", &in2);                    
                     printf("El resultado es: %i\n", resta(in1,in2));
                     break;
                case 3:
                     multiplicacion();
                     break;
                case 4:
                     division();
                     break;
                case 5:
                     printf("Ingresa el numero de base: \n");
                     scanf("%i", &in1);
                     printf("Ingresa la potencia: \n");
                     scanf("%i", &in2);
                     printf("La potencia es: %i \n", Potencia(in1,in2));
                     break;
                case 6:
                     printf("Ingresa el numero: \n");
                     scanf("%i", &in1);
                     printf("La raiz es: %f\n", raiz(in1));
                     break;
                case 7:
				printf("¿Estas seguro de salir del programa?, \n 1.- Si \n 2.- No \n");
				scanf("%i", &iop);
				
				if (iop == 1) {
					iop = 7;
					printf("Confirmo salida del programa gracias por participar");
					
				} else {
					iop = iop;
				}
				break; 
                default:
                     printf("Opcion no encontrada, elija de nuevo por favor"); 
                    
                }
    } while (iop!= 7);
    return 0;
}


int suma(int ina, int inb){
    int ir;   
    ir = ina + inb;
    printf("El resultado de la suma es: %i \n", ir);   
   return 0;
}

int resta(int ina, int inb){
    int ir;
    ir= ina - inb;
    return ir;
}

int multiplicacion(){
    int ir=0, ina=0, inb=0;
    printf("Ingresa el primer numero: \n");
    scanf("%i", &ina);
    printf("Ingresa el segundo numero: \n");
    scanf("%i", &inb);
    ir= ina * inb;
    printf("El resultado de la multiplicacion es: %i\n",ir);
    return 0;
}

float division(){
    float ir=0, fla=0, flb=0;
    printf("Ingresa el prmer numero:\n");
    scanf("%f", &fla);
    printf("Ingresa el segundo numero: \n");
    scanf("%f", &flb);
    ir= fla / flb;
    printf("El resultado de la division es: %f\n",ir);
    return 0;
}

int Potencia(int in1, int in2){
    int ir;
    ir = pow(in1,in2);
    return ir;
}

float raiz(int ina){
    float ir=0;
    ir = sqrt(ina);
    return ir;
}
