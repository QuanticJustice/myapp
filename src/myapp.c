#include <stdio.h>
#include <stdlib.h>
#include "squareroot.h"

int main( int argc, char* argv[] )
{
	double rv = squareroot( 987.0 );
	printf( "MAIN: squareroot( 987.0 ) is: %lf\n", rv );

	return 0;
}
