#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

void Show10Rands( char *msg )
{
  int x,y;
  char xa[8];

  printf("%s\n", msg);
  for (x = 0; x < 10; x++)
    {
    y =rand(), _itoa(y,xa,10);
    printf("%3s\t",xa);
    }
}

void main( void )
{
  Show10Rands("Ohne Initialisierung des Generators");
  srand( (unsigned) time( NULL ) );
  Show10Rands( "Nach srand() mit Datum und Uhrzeit");
}
