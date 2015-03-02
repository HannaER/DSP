#ifndef constants


//Sample rate in Hz
#define Fs              8000

//The number of samples in each block
#define BLOCK_LENGTH    2//160

//Record for this many seconds
#define REC_TIME        1.5

//How many samples will be copied form previous block into present block
#define OVERLAP         80

//number of block of one recording.
#define N_BLOCKS        150 //( (Fs * REC_TIME)*((BLOCK_LENGTH - OVERLAP) ) )

//number of reflection coefficients
#define N_REFLEC        10

//IsnÂ´t useful yet
#define THRESHOLD       0.05   // ska sättas först i run metoden innan allt startar

//length of buffer
#define BUFFER			(3 * BLOCK_LENGTH) 

// number fo subsets
#define SUBSET_LENGTH	8









typedef struct {
	float reflect[N_REFLEC]; // reflektionskoefficienterna
	float energy; // summan av absolutbeloppen av amplituden
} block_t;



#endif
