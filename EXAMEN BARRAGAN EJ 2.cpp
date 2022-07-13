#include <iostream>
#include <stdio.h>
#include<math.h>

using namespace std;
int main (){
	float hip, cat1, cat2;
	
	
	cout<<"Introduzca el valor de los catetos: ";
	cin>> cat1 >> cat2;
	
	hip = sqrt(pow(cat1,2)+pow(cat2,2));
	
	cout<<"La hipotenusa del triangulo es: " << hip;
	
	return 0;
}


