#include <iostream>
#include <windows.h>
using namespace std;

 

int main() {
    int in1 = 0, in2 = 0, iR = 0, dia, fecha;
    float hora = 0;

 

    printf("Ingresa la fecha: \n");
    scanf("%i", &dia);
    
    printf("Ingresa el nombre: \n");
    scanf("%i", &fecha);
    
    printf("Ingresa la hora: \n");
    scanf("%f", &hora);
    
    dia = in1;
    
    fecha = in2;
    
    printf("El resultado de la suma es:\n%i", in1);
    printf("El resultado de la suma es:\n%i", in2);
    printf("El resultado de la suma es:\n%f", hora);
    
    Sleep(10000);
    return 0;

 

}
