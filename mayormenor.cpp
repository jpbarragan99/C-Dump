#include <stdio.h>
#include <windows.h>
int main () {
	
	int X,Y,R;
	printf("Por favor introduzca el primer numero: ");
	
	scanf ("%i",&X);
	
	printf("Por favor introduzca el segundo numero: ");
	
	scanf ("%i",&Y);
	
	if (X>Y) {
		printf("El numero mayor es %d", X);
	} else {
		printf("El numero mayor es %i", Y);
	}
	Sleep(30000);
	return 0;
}


