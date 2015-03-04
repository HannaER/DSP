#include <stdio.h>
#include "constants.h"
#include <limits.h>


typedef struct result_t result_t;


struct result_t{
    char* name;
    float min_err;
};


static float real_abs(float value)
{
    if (value < 0) {
        return -value;
    }
    return value;
}

// input ska vara en lista med block_t structar i subset form
// gå igenom databasen och jämföra stoleken på error
result_t matching(block_t* input, db_t* database){
    
    
    word_t words_from_db[N_WORDS] = database.db;
    
    /*
     
     
     for each word in database do:
     
        calculate euclidean distance from input to word;
            << for each element in input, do:
                    abs(input.element - word.element )
    
     */
    
    result_t result;
    result.min_err = INT_MAX;
    
    
    float error = 0;
    int i, j, k;
    for(i = 0; i < N_WORDS; ++i){
        version_t version_of_word = words_from_db[i];
        for(j = 0 ; j < N_VERSIONS; ++j){
            block_t temp = verson_of_word.versions(j);
            for(k = 0; k < SUBSETS_LENGTH; ++k){
                error = error + real_abs(temp.reflect[k] - input.reflect[k]);
            }
        }
        if (error < result.min_err) {
            result.min_err = error;
            result.name = words_from_db[i].name;
        }
    }

	return result;
}
