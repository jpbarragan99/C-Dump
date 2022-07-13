#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

using namespace std;

int main () 
{	
	int opc, d = 0, nom = 0, n, s, m=s, a, j;
	float hora = 0;

cout<<"\t Proyecto Final"<<endl;
cout<<"\t Consultorio"<<endl;

do {
cout<<"1) Programar Cita"<<endl;
cout<<"2) Registrar Sintomas"<<endl;
cout<<"3) Ver Citas"<<endl;
cout<<"4) Sintoma mas comun"<<endl;
cout<<"5) Salir"<<endl;
cin>>opc;

switch (opc){
	
	case 1:
		cout<<"Introduce el dia"<<endl; 
		cin>>d;
		cout<<"Introduce la hora"<<endl; 
		cin>>hora;
		cout<<"Introduzca su nombre"<<endl; 
		cin>>nom;
		cout<<"Dia: "<<d<<"a las: "<<hora<<"a nombre de: "<<nom<<endl;
		break;
	
	case 2:
		cout<<"Ingrese el numero de sintomas a registrar: ";
		cin>>n;
    	int A [n];
    	cout<<"Ingrese los datos :\n";
    	for(int i=0;i<n;i++){
        cout<<"ingrese: ";
		cin>>A [i];
    	}
    	
    	for(int i=0;i<n;i++){
        s=0;
        for(int j=0;j<n;j++){
            if(A[i]==A[j] && i!=j){
                s=s+1;
            }               
        }
        if(s>=m){
        m=s;
        a=i;    
        }
    	}
   	 cout<<"la moda de sintomas es: "<<A[a]<<" y tiene "<<m+1<<" repeticiones"<<endl;
        break;
	
	case 3:
		cout<<"prueba 1"<<endl;
		break;
			
	case 4:
		  cout<<"prueba 1"<<endl;
	break;
	
	case 5:
		printf("¿Estas seguro de salir del programa?, \n 1.- Si \n 2.- No \n");
		scanf("%i", &opc);
				
			if (opc == 1) {
				opc = 5;
				printf("Confirmo salida del programa gracias por participar");
					
			} else {
			opc = opc;
			}
			break; 
	
}

return 0;
}

}
