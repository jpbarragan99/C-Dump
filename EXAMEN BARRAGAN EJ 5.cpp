#include <iostream>
#include <stdio.h>
#include<math.h>

using namespace std;

void Pares_Impares();
int Perfecto(int n);
void Numero_Perfecto();
void Inverso();
void Tiempo(); 

int main()
{

int opcion;
 printf("MENU DE OPCIONES \n");
 printf("\n 1.- Pares e Impares ");
 printf("\n 2.- Numero Perfecto ");
 printf("\n 3.- Numero Invertido ");
 printf("\n Seleccione una opcion: ");
 scanf("%d",&opcion);
 switch(opcion)
 {
 case 1: Pares_Impares(); break;
 case 2: Numero_Perfecto(); break;
 case 3: Inverso(); break;
 default: break;
 }
 return 0;
} 

void Pares_Impares()
{
 int i=0, v, t;
 printf("\nNUMEROS PARES E IMPARES \n");
 for(i=1;i<=10;i++)
 {
 printf("\n Introduce el valor %d: ",i);
 scanf("%d",&v);
 t=v%2;
 if (t==0)
 printf(" Es un valor par \n");
 else
 printf(" Es un valor inpar \n");
 }
} 

int Perfecto(int n)
{
 int i, suma,t;
 suma=0;
 for (i=1;i<n;i++)
 {
 t=n%i;
 if (t==0)
 suma=suma+i;
 }
 if (suma==n)
 return 1;
 else
 return 0;
} 

void Numero_Perfecto()
{
 int i,t;
 printf("\nNUMEROS PERFECTOS \n");
 for (i=1;i<=100;i++)
{ 

t=Perfecto(i);
 if (t==1)
 printf(" %d Es un numero perfecto \n",i);
 }
} 

void Inverso()
{
 int i,x,t, suma;
 printf("\n NUMERO INVERTIDO \n");
 printf("\n Ingrese el numero de 4 digitos: ");
 scanf("%d",&x);
 suma=0;
 t=x/1000;
 x=x%1000;
 suma=suma+t;
 t=x/100;
 x=x%100;
 suma=suma+(t*10);
 t=x/10;
 x=x%10;
 suma=suma+(t*100);
 suma=suma+(x*1000);
 printf("\n El numero es=%d ", suma);
} 

