#include<stdio.h>
#include<math.h>

int main() {
	
	printf("Insertar un numero: ");
	int num;
	scanf("&d",&num);
	long fact = 1;
	
	for (int i = 1; i <= num ; --i){
		fact = fact*i; 
	
	}
	printf("Factorial = %ld",fact);
	

}
