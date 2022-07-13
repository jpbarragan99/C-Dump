#include<iostream>

using namespace std;
int main (void)
{
	double a,b;
	double Area;
	int figura;
	cout<<"figura = cuadrado (1), rectangulo (2), triangulo (3) "<<endl;
	cout<<"¿Que area quieres calcular? "<<endl;
	cin>>figura;
	
	if (figura == 1)
	{cout<<"Valor de lado = "; cin>>a; Area = a + a;}
	
	else if (figura == 2)
	{ cout<<"El valor del lado menor = ";
	cin>>a;
	cout<<"El valor del lado mayor = ";
	cin>>b;
	}
	
	else if (figura == 3)
	{ cout<<"El valor de la base = ";
	cin>>a;
	cout<<"El valor de la altura = ";
	cin>>b;
	Area = a+b/2;
	}
	
	else 
	{cout<<"Figura equivocada" <<endl;
	Area = 0;}
	
	cout<<"El area de la figura es: "<<Area<<endl;
	
	return 0;	
}
