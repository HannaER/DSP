/*****************************************************************************
 * speechrecognition.c
 *****************************************************************************/
#include <stdio.h>
#include "Levinson.c"

#define P	3
	

int main( void )
{
	
	double input[] = {1,2,3,4,5,6,7,8,9};
	double A[P] = {0};
	double K[P] = {0};
	
	levinson(P, input, A, K);
	int i;
	for(i = 0; i<3; ++i){
		printf("%f \n", K[i]); 
	}
	
	
	return 0;
}
