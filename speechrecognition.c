/*****************************************************************************
 * speechrecognition.c
 *****************************************************************************/
#include <stdio.h>
#include "Levinson.h"
#include "constants.h"
#include "getX.h"
#include <stats.h>
#include <filter.h>
#include <complex.h>


#define SAMPLES	901 // length of x
#define SECTIONS 4 	// Fett oklart

int main( void )

{
	
	//Testar iir --> fft --> plotta
	//iir
	double* input;
	
	get_x(&input); // add input
/*	int i ;
	for (i = 0; i <= 4; i++){
		printf("input[%d] = %f \n", i, input[i]);
	}*/
	const struct{
		float a0;
		float a1;
		float a2;
	}A_coeffs[SECTIONS];
	
	const struct{
		float b0;
		float b1;
		float b2;
	}B_coeffs[SECTIONS];
	
	float  coeffs[4*SECTIONS];
	//float input[SAMPLES], output[SAMPLES];
	float output[SAMPLES];
	float state[2*SECTIONS + 1];
	float scale;
	float a0, a1, a2;
	float b0, b1, b2;
	int i; 
	
	scale = 1.0;
	/*
	
	for (i = 0; i < SECTIONS; i++){
		a0 = A_coeffs[i].a0;
		a1 = A_coeffs[i].a1;	
		a2 = A_coeffs[i].a2;
		a1 = -a1;
		a2 = -a2;
		coeffs[(i*4) + 0] = (a2/a1);
		coeffs[(i*4) + 1] = (a1/a0);
		b0 = B_coeffs[i].b0;
		b1 = B_coeffs[i].b1;
		b2 = B_coeffs[i].b2;
		coeffs[(i*4) + 2] = (b2/b1);
		coeffs[(i*4) + 3] = (b1/b0);
		scale = scale*(b0/a0);
	}
	for(i = 0;i < 2*SECTIONS; i++){
		state[i] = 0;		
	}
	iir(input, output, coeffs, state, SAMPLES, SECTIONS);
	
	for(i = 0; i < SAMPLES;i++){
		output[i] = output[i]*scale;
	}*/
	
	//fft
	
	/*int fftsize = 32;
	float sigdata[fftsize];
	complex_float r_output[fftsize];
	complex_float i_output[fftsize];
	complex_float i_temp[fftsize];
	complex_float c_temp[fftsize];
	float *r_temp = (float*) c_temp;
	complex_float pm twiddle_table[fftsize/2];
	int i;
	twidfft(twiddle_table, fftsize);
	rfft(sigdata, r_temp, r_output, twiddle_table, 1, fftsize);
	for(i = 1; i < (fftsize/2); i++){
		r_output[fftsize - i] = conf(r_output[i]);
	}*/
	
	//plotta
	
	
	
	
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
