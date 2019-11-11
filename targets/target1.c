#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void foo( char* temp )
{
  char name[4];

  strncpy(name, temp, 12);
}


int main(int argc, char* argv[] ) 
{
  if( argc != 2 )
  {
    fprintf(stderr, "meet: argc != 2\n");
    exit(EXIT_FAILURE);
  }

  foo( argv[1] );
  return 0;
}

