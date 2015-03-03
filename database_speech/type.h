

#define N_REFLEC 	2
#define	N_VERSIONS 	3
#define	REFLEC_LENGTH	3
#define	N_WORDS		1

typedef struct 
{
	float reflec[N_REFLEC];
	float energy;
} block_t;

typedef struct 
{
	block_t version[REFLEC_LENGTH];
}version_t;


typedef struct
{
	char* name;
	version_t version[N_VERSIONS];
}word_t;

typedef struct 
{
	char* name; //needed? can be held in stack memory?
	float min_err;
} result_t;

typedef struct{
	float threshold;
	word_t words[N_WORDS];
}db_t;