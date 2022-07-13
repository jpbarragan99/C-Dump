#include <stdio.h>
#include <windows.h>

int mcd(int x, int y);
int main()
{
 int x,y,t;
 printf("\n MAXIMO COMUN DIVISOR\n");
 printf("\n Ingrese el valor de x: ");
 scanf("%d",&x);
 printf("\n Ingrese el valor de y: ");
 scanf("%d",&y);
 t=mcd(x,y);
 printf("\n El MCD de x=%d y y=%d es: %d ",x,y,t);

 return 0;
}
int mcd(int x, int y)
{
 if(y==0)
 return x;
 else

 return mcd(y,x%y);
}
