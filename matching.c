#include <stdio.h>
#include "constants.h"
#include "matching.h"
#include <limits.h>
#include "load_db.h"
#include <float.h>





static float real_abs(float value)
{
    if (value < 0) {
        return -value;
    }
    return value;
}

void matching(db_t current_database, version_t input, result_t* result){
   
	result_t r_temp;
	
    r_temp.min_err = FLT_MAX;
    
    
    float error = 0;
    int i, j, k, l;
    for(i = 0; i < N_WORDS; ++i){
        word_t temp_word = current_database.words[i]; 
        for(j = 0 ; j < N_VERSIONS; ++j){
            version_t temp_version = temp_word.versions[j];             
            for(k = 0; k < SUBSET_LENGTH; ++k){
            	block_t temp_block = temp_version.subset[k];
            	block_t temp_input = input.subset[k];
            	for(l = 0; l < N_REFLEC; ++l){
            		error = error + real_abs(temp_block.reflect[l] - temp_input.reflect[l]);
           		}
      	   }
      	   if (error < r_temp.min_err) {
      	   		r_temp.min_err = error;
				r_temp.name = temp_word.name;
	  	    }
	  	    error = 0;
     
        }
    }
	*result = r_temp;
	return;
}
