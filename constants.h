#ifndef CONSTANTS
#define CONSTANTS
//Sample rate in Hz
#define Fs              8000

//The number of samples in each block
#define BLOCK_LENGTH   	160

//Record for this many seconds
#define REC_TIME        1.5

//How many samples will be copied form previous block into present block
#define OVERLAP         80

//number of block of one recording.
#define N_BLOCKS        150 //( (Fs * REC_TIME)*((BLOCK_LENGTH - OVERLAP) ) )

//number of reflection coefficients
#define N_REFLEC        10

//IsnÂ´t useful yet
//#define THRESHOLD       0.05   // ska sättas först i run metoden innan allt startar

//length of buffer
#define BUFFER			3

//Buffer length in samples. 
#define BUFFER_SIZE		6 

// number of subsets
#define SUBSET_LENGTH	8

#define DB_LENGTH		2 // how many different words there is as db i.e. "höger", "vänster" etc.

#define	N_VERSIONS 	3 // number of versions of a certain word
#define	SUBSETS_LENGTH	3 // length of subsets
#define	N_WORDS		1 // number of different words we match against



typedef struct {
	float energy; // summan av absolutbeloppen av amplituden
	float reflect[N_REFLEC]; // reflektionskoefficienterna
} block_t;



#endif
