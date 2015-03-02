#include <stdio.h>
#include "constants.h"

static int integer = 0;
static int remainder = 0;


void create_subsets(block_t* input, int* first, int* last, block_t* output){
	integer = (last - first + 1)/SUBSET_LENGTH;
	remainder = (last - first + 1)%(SUBSET_LENGTH);
	
	int i, k;
	for(i = 0; i < SUBSET_LENGTH; i++){
		if(i <= remainder){
			for(k = i +(i - 1)*integer; i*integer + i; k++){	
				// go through vector
			}
			// calc. mean
		}
		if(i > remainder){
			for(k = i + (i - 1)*integer; i*integer + remainder; k++){
				// go through vector
			}	
			//calc. mean
		}
	}
	
	return;	
}
