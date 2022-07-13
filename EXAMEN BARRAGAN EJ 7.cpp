#include <stdio.h>
#include <windows.h>

int ackerman(int m, int n);
int main()
{
 int m,n,t;
 printf("\n FUNCION DE ACKERMAN\n");
 printf("\n Ingrese el valor de m: ");
 scanf("%d",&m);
 printf("\n Ingrese el valor de n: ");
 scanf("%d",&n);
 t=ackerman(m,n);
 printf("\n La funcion de Ackerman para m=%d y n=%d es: %d ",m,n,t);
 
 return 0;
}
int ackerman(int m, int n)
{
 if(m==0)
 return n+1;
else
{
 if(n==0)
 return ackerman(m-1, 1);
 else
 return ackerman(m-1, ackerman(m, n-1));
 }
}
