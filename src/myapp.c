#include <stdio.h>
#include <stdlib.h>
#include "squareroot.h"
#include "power.h"

int main( int argc, char* argv[] )
{
	printf( "MAIN: squareroot( 987.0 ) is: %lf\n", squareroot( 987.0 ) );
	printf( "MAIN: power( 11.0, 3.0 ) is: %lf\n", power( 11.0, 3.0 ) );

	return 0;
}
