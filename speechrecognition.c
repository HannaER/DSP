
/*****************************************************************************
 * speechrecognition.c
 *****************************************************************************/
//bibliotek
#include <stdio.h>

// funktioner och defines
#include "Levinson.h"
#include "constants.h"
#include "rm_noise.h"
#include "pre_emph.h"
#include "level_detect.h"

// kanske inte nödvändiga här
#include <complex.h> 
#include <stats.h> 
#include <stdlib.h>
#include <errno.h>

// includes för tester
#include <string.h>
#include "fft_.h"
#include "getX.h"
#include "test_signal.h"

/*
float y[901];
float x[901];
float z[901];
float overlapping_samples[OVERLAP]; // vektor där senaste samplade värdena sparas


*/
// b1-b6 är till test_signal --> level_detection
float b1[BLOCK_LENGTH];
float b2[BLOCK_LENGTH];
float b3[BLOCK_LENGTH];
float b4[BLOCK_LENGTH];
float b5[BLOCK_LENGTH];
float b6[BLOCK_LENGTH];


struct block_t{
	float reflect[N_REFLEC]; // reflektionskoefficienterna
	float energy; // normen
};


int main( void )

{
	// INNAN RUN BÖRJAR: räkna ut treshold och deklarera!
	
	
	
	
	
	//block_t[N_BLOCKS + 3] record; // lista med structs som är inspelningen

	//get_x(x); // add input

	//rm_noise(x, y); // notch filter
		
	//pre_emph(y, z); //pre_emph == fir filter
	
	//testa level detection
	
	test_signal(b1, b2, b3, b4, b5, b6);
	
	level_detection(b1);
	level_detection(b2);
	level_detection(b3);
	level_detection(b4);
	level_detection(b5);
	level_detection(b6);

	
	
	

	
	
	
	
	
	
	
	
	
	
	
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
