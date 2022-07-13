#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main() 
{
	int num;
	int numd;
	int suma;
	int resta;
	int mult;
	float div;
	
	
    cout<<"\t\t\t\t\t\t___________________"<<endl;
    cout<<"\t\t\t\t\t\tExamen JP Barragan"<<endl; 
    cout<<"\t\t\t\t\t\t___________________" <<endl;
    cout<<endl<<endl;

    cout<<"Ingrese el primer numero"<<endl;
    cin>>num;
    cout<<"Ingrese el segundo numero"<<endl; 
    cin>>numd;
    cout<<endl<<endl;
    
    suma = num + numd; 
    resta = num - numd; 
    mult = num * numd; 
    div = num / numd; 
    cout<<"El resultado de la suma es: " <<suma<<endl;
    cout<<"El resultado de la resta es: " <<resta<<endl;
    cout<<"El resultado de la multiplicacion es: " <<mult<<endl;
    cout<<"El resultado de la division es: " <<div<<endl;
    
    
    system("pause");
    return(0); 
}
