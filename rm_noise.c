#include <filter.h>	
#include <stdio.h>
#define SAMPLES	901 // length of x
#define SECTIONS 1 	// one filter


const struct{
	float a0;
	float a1;
	float a2;
}A_coeffs[SECTIONS] = {{1, -0.92, 0}};
	
const struct{
	float b0;
	float b1;
	float b2;
}B_coeffs[SECTIONS]= {{1, -1, 0}};
	
float pm coeffs[4*SECTIONS];


void rm_noise(float* x, float* output)
{
	float state[2*SECTIONS + 1];
	float scale;
	float a0, a1, a2;
	float b0, b1, b2;
	int i; 	
	scale = 1.0;	
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
	iir(x, output, coeffs, state, SAMPLES, SECTIONS);	
	
	for(i = 0; i < SAMPLES;i++){
		//y[i] = y[i]*scale;
		if(i<=4){
		//printf("%f \n", output[i]);
		//printf("%f \n", *output[i]);
		}
	}

}


