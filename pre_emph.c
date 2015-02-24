#include <stdio.h>
#include <filter.h>

#define TAPS 2
#define SAMPLES 901

float pm fircoeffs[TAPS] = {-0.97, 1};

void pre_emph(float** x, float** y){
	
	/* coeffs array must be */
	/* initialized and in PM memory */
	float firstate[TAPS+1];
	int i;
	for (i = 0; i < TAPS+1; i++){
		firstate[i] = 0; /* initialize state array */
	}
	fir(*x, *y, fircoeffs, firstate, SAMPLES, TAPS);
	for(i = 0; i< SAMPLES; i++){
		printf("%f \n" , y[i]);
	}
	
}
