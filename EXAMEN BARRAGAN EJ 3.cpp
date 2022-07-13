#include<iostream>
#include<math.h>


int main()
{
 int i,j,factorial,potencia,x;
 float e;
 printf("Introduce el valor de x: ");
 scanf("%d",&x);
e=1.0;
 for (i=1;i<=10;i++)
 {
 potencia=1;
 for (j=1;j<=i;j++)
 potencia=potencia*x;
 factorial=1;
 for (j=i;j>0;j--)
 factorial=factorial*j;
 e=e+(potencia/factorial);
 }
 printf("El valor de e elevado a x: %f", e);

 return 0;
}
