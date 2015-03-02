#include <stdio.h>
#include "constants.h"




void create_subsets(block_t* input, int first, int last, block_t* output){
	int integer = (last - first + 1)/SUBSET_LENGTH;
	int remainder = (last - first + 1)%(SUBSET_LENGTH);
	
	float div1 = 1/(integer + 1);
	float div2 = 1/(integer);
	
	int i, j, k;
	for(i = 0; i < SUBSET_LENGTH; i++){ // index for output
		output[i].reflect[0] = 0;
		if(i < remainder){
			for(j = 0; j < N_REFLEC; j++){ // index for each vector "reflect" in input
				for(k = i +(i)*integer; k < (i + 1)*integer + i + 1; k++){	 // index for input
					output[i].reflect[j] = output[i].reflect[j] + input[k + first].reflect[j]*div1;
				}
			}
		}
		if(i >= remainder){
			for(j = 0; j < N_REFLEC; j++){
				for(k = i + (i)*integer;k < (i + 1)*integer + remainder; k++){
					output[i].reflect[j] = output[i].reflect[j] + input[k + first].reflect[j]*div2;
				}
			}	
		}
	}	
	return;	
}
