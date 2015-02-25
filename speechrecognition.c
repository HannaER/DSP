
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
#include "level_detect.h"
#include "fft_.h"
#include "getX.h"
#include <stats.h>
#include <complex.h>


float y[901];
float x[901];
float z[901];

struct block_t{
	float reflect[N_REFLEC]; // reflektionskoefficienterna
	float energy; // normen
};


int main( void )

{
	// INNAN RUN BÖRJAR: räkna ut treshold och deklarera!
	block_t[N_BLOCKS + 3] record;
	//Testar iir --> fft --> plotta
	//iir
	 
	get_x(x); // add input

	rm_noise(x, y); // notch filter
	
	//fft
	
	//plotta
		
	pre_emph(y, z); //pre_emph == fir filter
	
	
	
	
	
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
