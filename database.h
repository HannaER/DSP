#ifndef  DATABASE
#define DATABASE 
#include <string.h>

// Database is used as a storage for spoken words. Each db object stores schur coeffs of one word. 

//#define DB_LENGTH	(9)	//10 columns with 12 coeffs in each. 


typedef struct database_t database_t;

struct database_t{
	database_t* next;
	const double * data;
	char name;
};

#endif
