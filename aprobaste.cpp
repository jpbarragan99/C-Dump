#include <stdio.h>
#include <windows.h>
int main() {
	int X,Y,Z,R;
	
	printf("Introduce tu calificacion del primer parcial : ");
	
	scanf("%d",&X);
	
	printf("Introduce tu calificacion del segundo parcial ");
	
	scanf("%d",&Y);
	
	printf("Introduce tu calificacion del tercer parcial ");
	
	scanf("%d",&Z);
	
	R = (X + Y + Z)/ 3;
	
	if (R > 5) {
		printf("\nFelicidades aprobaste, Tu promedio es: %d\n", R);
	}else{
		printf("\nFelicidades reprobaste, Tu promedio es: %d\n", R);
	}
	
	Sleep(30000);
	
	return 0;
}


