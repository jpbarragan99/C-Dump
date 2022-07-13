#include <stdio.h>
#include <windows.h>
int main () {
	
int inl=0, ires=0;

printf("Ingresa un numero por favor: \n");
scanf("%d", &inl);
for(int i=0; i<=100; i++){
	printf("%i \n", i);
}

for(int i=1; i<=10; i++){
	ires = inl * i;
	printf("%i X %i = %i\n",inl,i,ires);
}
Sleep(100000);
return 0;
}
