#include <iostream>

using namespace std;
int main (void)

{
	double a, b; 
	int c;
	cout<<"Introduzca el primer numero"<<endl;
	cin>>a;
	cout<<"Introduzca el segundo numero"<<endl;
	cin>>b;
	
	cout<<"¿Que operacion deseas hacer? Suma (1), Producto (2)"<<endl;
	cin>>c;
	
	switch (c)
	{
		case 1:
			cout<<"El resultado es: "<<a+b<<endl;
			break;
			
			default:
			cout<<"El resultado es: "<<a*b<<endl;
			break;
	}
	return 0;
}
