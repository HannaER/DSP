#ifndef LOAD_DB
#define LOAD_DB
#include "constants.h"
//#define N_REFLECS 	2 // reflection coeff


void load_db(void);


typedef struct 
{
	block_t versions[SUBSETS_LENGTH];
} version_t; // a version of a certain word(a subset) 


typedef struct
{
	char* name;
	version_t word[N_VERSIONS];
} word_t; // a list of versions for a certain word


typedef struct{
	float threshold;
	word_t db[N_WORDS];
} db_t; //a list of db:s for different words


typedef struct 
{
	char* name; //needed? can be held in stack memory?
	float min_err;
	float mean_err;
} result_t; // matching result for a db for a type of word



#endif
