#include <stdio.h>
#include <filter.h>

#define TAPS 2
#define SAMPLES 901

float pm fircoeffs[TAPS] = {-0.97, 1};

void pre_emph(float* input, float* output){
	
	/* coeffs array must be */
	/* initialized and in PM memory */
	float firstate[TAPS+1];
	int i;
	for (i = 0; i < TAPS+1; i++){
		firstate[i] = 0; /* initialize state array */
	}
	fir(input, output, fircoeffs, firstate, SAMPLES, TAPS);
	
}
