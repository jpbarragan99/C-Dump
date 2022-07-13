#include <stdio.h>
 
int main(int argc, char** argv) {
	
	int num, fact=1;	
	
	printf("Inserta un numero: ");
	scanf("%d",&num);
 	
 	for(num;num>0;num--){
 		fact=fact*num;
	 }
	printf("%d",fact);

	return 0;
}
