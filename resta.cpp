#include <iostream>
#include <windows.h>
using namespace std;

 

int main() {
    int in1 = 0, in2 = 0, iR = 0;

 

    printf("Ingresa el primer numero: \n");
    scanf("%i", &in1);
    
    printf("Ingresa el segundo numero: \n");
    scanf("%i", &in2);
    
    iR = in1 + in2;
    
    printf("El resultado de la suma es:\n%i", iR);
    
    Sleep(10000);
    return 0;

 

}
