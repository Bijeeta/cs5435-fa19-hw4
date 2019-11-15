#include <stdio.h>
#include <string.h>


greeting( char* temp1)
{
	char name[400];
	memset(name, 0, 400);
	strcpy(name, temp1);
	printf( "Hi %s\n", name );
}


int main(int argc, char* argv[] ) 
{
	greeting( argv[1] );
	printf( "Bye \n" );
}
