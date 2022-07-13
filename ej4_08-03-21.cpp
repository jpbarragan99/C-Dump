#include <iostream>
#include <fstream>
#define MAX_SIZE 25

using namespace std;
int main (void)
{
	int size;
	ofstream MyReport ("resultado.txt");
	
	cout<<"Introduzca una dimension del vector"<<endl;
	cin>>size;
	if (size>MAX_SIZE)
	{
		cerr << "Error, tamaño demasiado grande"<<endl;
		MyReport <<"*****************inicio"<<endl;
		MyReport <<"Error: dimension del vector debe de ser  menor de: " <<MAX_SIZE<<endl;
		MyReport <<"*****************fin"<<endl;
		MyReport.close ();
		return 1;	
	}
	
	cout<<"vamos a trabajar con un vector de "<< size << " componente"<< endl;
	
	MyReport <<"********************inicio" <<endl;
	MyReport <<"Vector de " <<size<<"componentes"<<endl;
	MyReport <<"********************fin" << endl;
	MyReport.close();
	return 0;
}
