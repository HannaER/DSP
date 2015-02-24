/*****************************************************************************
 * speechrecognition.c
 *****************************************************************************/
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include "Levinson.h"
#include "constants.h"
#include "rm_noise.h"
#include "pre_emph.h"
#include "fft_.h"
#include "getX.h"
#include <stats.h>
#include <complex.h>





int main( void )

{
	
	//Testar iir --> fft --> plotta
	//iir
	float* x; //pointer to input
	float* y = malloc( 901 * sizeof(float)); 
	float* z = malloc( 901 * sizeof(float));
	
	if(y == NULL){
		exit(1);
	} 
	get_x(&x); // add input

	rm_noise(&x, &y); // notch filter
	int i;
	for(i =0; i< 10;i++){
		printf("%f \n", y[i]);
	}
	printf("i fir:\n");
	
	//fft
	
	//plotta
	
	
	//pre_emph == fir filter
	pre_emph(&y, &z);
	
	//Testar levinson och autocorr
	/*
	double x[] = {1,2,3,4,5,6,7,8,9};
	double A[K_LENGTH] = {0};
	double K[K_LENGTH] = {0};		
	double R[K_LENGTH+1] = {0};
	autocorr(R, x, BLOCK_LENGTH, K_LENGTH+1);
	

	levinson(R, A, K);
	int i;
	for(i = 0; i<K_LENGTH; ++i){
		printf("%f \n", K[i]); 
	}*/
	
	return 0;
}
