#include <stdio.h>
#include "constants.h"
#include "buffer.h"



// input is a vector of length BLOCK_LENGTH consisting of the recent samples
int level_detect(float* input ){ 
	static int counter = 0;
	static int block = 1;
	static int threshold = THRESHOLD;
	float norm = 0;
	
	
	int i;
	float temp = 0;
	int output = 0;
	
	for(i = 0; i < BLOCK_LENGTH; i++){ // calculate norm
		temp = input[i];
		if (temp < 0){
			norm = norm + (-temp)*(-temp);	
		}
		else if(temp >= 0){
			norm = norm + (temp)*(temp);
		}
	}
	
	float new_threshold = 0;
	new_threshold = norm*0.05 + threshold*0.95;
	
	if (new_threshold > 0.9*threshold){
		counter = counter + 9;
		if(counter > 36) {
		// start sampling N_BLOCKS of sampels	
		output = 1; // true	
		printf("%d", block);
		}

	} else {
		counter = counter - 10;
		//put(input);	// add to ringbuffer
		if (counter < 0){
			counter = 0;
		}
		output = 0; // false	
	}
	threshold = new_threshold;
	block = block + 1;
	return output;
	
}

