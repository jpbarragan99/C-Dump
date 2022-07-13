#include <stdio.h>
#include <windows.h>


#define GANA 0
#define PIERDE 1
#define CONTINUA 2
int PrimerTiro=1, SumaDados=0, MiPunto=0, EstadoJuego=CONTINUA;
int LanzaDados();
int Juego();
int main()
{
 int i;
 printf("\n CRAPS \n");
 Juego();
if (EstadoJuego==GANA)

printf("\n ¡FELICIDADES! ");
 else
 printf("\n Lo sentimos acaba de perder ");
 Sleep(5000);
 return 0;
}
int LanzaDados()
{
 int dado1,dado2, suma;
 dado1=1+(rand()%6);
 dado2=1+(rand()%6);
 suma=dado1+dado2;
 return suma;
}
int Juego()
{
 int puntos,n_lanzamiento;
 n_lanzamiento=1;
 while(EstadoJuego==CONTINUA)
 {
 puntos=LanzaDados();
 if (PrimerTiro==1)
 {
 printf("\n Primer lanzamiento: %d", puntos);
 switch(puntos) 
 {
 case 7:EstadoJuego=GANA;break;
 case 11:EstadoJuego=GANA;break;
 case 2:EstadoJuego=PIERDE;break;
 case 3:EstadoJuego=PIERDE;break;
 case 12:EstadoJuego=PIERDE;break;
 default: {
 PrimerTiro=0;
 EstadoJuego=CONTINUA;
 MiPunto=puntos;
 break;
 }
 }
 }
 else
 {
 n_lanzamiento=n_lanzamiento+1;
 printf("\n Lanzamiento numero %d: %d",
n_lanzamiento,puntos);
 switch(puntos)
 {
 case 7:EstadoJuego=PIERDE;break;
 case 'Mipunto':EstadoJuego=GANA;break;
 default: {
 PrimerTiro=0;
 EstadoJuego=CONTINUA;
 MiPunto=puntos;
 break;
 }
 }
 }
}
return EstadoJuego;
}
 
 
