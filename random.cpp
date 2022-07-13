/* rand example: guess the number */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int main ()
{
  int iSecret, iGuess;

  /* initialize random seed: */
  srand (time(NULL));

  /* generate secret number between 1 and 10: */
  iSecret = rand() % 10 + 1;

  do {
    printf ("Adivina un número entre 1 y 0: ");
    scanf ("%d",&iGuess);
    if (iSecret<iGuess) puts ("menos");
    else if (iSecret>iGuess) puts ("más");
  } while (iSecret!=iGuess);

  puts ("Correcto");
  return 0;
}
