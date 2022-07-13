#include <stdio.h>
#include <windows.h>

int main () {
int z;

printf("Ingresa un numero: ");

scanf("%i",&z);

if(z == 1) {
	printf("El semaforo esta en verde");
} else if (z == 2) {
	printf("el semaforo esta en amarillo");
} else if (z == 3) {
	printf("El semaforo esta en rojo");
}else {
	printf("Color no valido");
}
	
Sleep(30000);	

return 0;

}
