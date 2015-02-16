/*****************************************************************************
 * speechrecognition.c
 *****************************************************************************/
#include <stdio.h>
#include "Levinson.h"
#include <stats.h>
#define P	3
#define samples	9	

int main( void )
{
	
	double x[] = {1,2,3,4,5,6,7,8,9};
	double y[] = {1,2,3,4,5,6,7,8,9};
	double A[P] = {0};
	double K[P] = {0};		
	double R[P+1] = {0};
	autocorr(R, x, samples, P+1);
	

	levinson(P, x, A, K, R);
	int i;
	for(i = 0; i<P; ++i){
		printf("%f \n", K[i]); 
	}

	return 0;
}
