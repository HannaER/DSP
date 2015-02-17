/*****************************************************************************
 * speechrecognition.c
 *****************************************************************************/
#include <stdio.h>
#include "Levinson.h"
#include "constants.h"
#include <stats.h>


int main( void )
{
	
	double x[] = {1,2,3,4,5,6,7,8,9};
	double A[K_LENGTH] = {0};
	double K[K_LENGTH] = {0};		
	double R[K_LENGTH+1] = {0};
	autocorr(R, x, BLOCK_LENGTH, K_LENGTH+1);
	

	levinson(R, A, K);
	int i;
	for(i = 0; i<K_LENGTH; ++i){
		printf("%f \n", K[i]); 
	}
	
	return 0;
}
