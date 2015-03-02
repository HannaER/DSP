
/*****************************************************************************
 * speechrecognition.c
 *****************************************************************************/
//bibliotek
#include <stdio.h>

// funktioner och defines
#include "Levinson.h"
#include "constants.h"
#include "rm_noise.h"
#include "pre_emph.h"
#include "level_detect.h"
#include "buffer.h"
#include "cut.h"
#include "create_subsets.h"

// kanske inte nödvändiga här
#include <complex.h> 
#include <stats.h> 
#include <stdlib.h>
#include <errno.h>

// includes för tester
#include <string.h>
#include "fft_.h"
#include "getX.h"
#include "test_signal.h"

/*
// testar get_x, iir och pre_emph
float y[901];
float x[901];
float z[901];
float overlapping_samples[OVERLAP]; // vektor där senaste samplade värdena sparas
*/

/*
// b1-b6 är till test_signal --> level_detection test
float b1[BLOCK_LENGTH];
float b2[BLOCK_LENGTH];
float b3[BLOCK_LENGTH];
float b4[BLOCK_LENGTH];
float b5[BLOCK_LENGTH];
float b6[BLOCK_LENGTH];
*/

/*
// till buffertest
float b1[2] = {1, 2};
float b2[2] = {3, 4};
float b3[2] = {5, 6};
float b4[2] = {7, 8};
float b5[2] = {9, 10};
float b6[2] = {11, 12};
float b7[2] = {13, 14};
*/

block_t record[N_BLOCKS + BUFFER]; // lista med structs som är inspelningen
static float sample_old[OVERLAP] = {0};
static float sample_new[OVERLAP] = {0};
static float current_block[BLOCK_LENGTH] = {0};
static float temp_block[BLOCK_LENGTH] = {0};

int run = 1;

int main(void)

{
	int i,j, k;
	
	// INNAN RUN BÖRJAR:
	//varna, vänta, räkna ner mha dioderna --> räkna ut threshold
	// fyll sample_old
	
	while(run){
		// sample 80 sample in fs and put in sample_new
		// kan kanske spara direkt i sample_current
		for(i = 0; i < OVERLAP; i++){
			current_block[i] = sample_old[i];
			current_block[OVERLAP + i] = sample_new[i];
			sample_old[i] = sample_new[i];
		}
		rm_noise(current_block,temp_block);
		pre_emph(temp_block, current_block);		

		if(level_detect(current_block)){ 				
			levinson(current_block, record[BUFFER].reflect);
			record[BUFFER].energy = get_energy();	
			for(i = BUFFER + 1; i < N_BLOCKS + BUFFER  ; i++){ // sampla i 1.5 seconds
				// sampla nytt block om 80 sample i new_sample
				for(j = 0; j < OVERLAP; j++){
					current_block[j] = sample_old[j];
					current_block[OVERLAP + j] = sample_new[j];
					sample_old[j] = sample_new[j];
				}
				rm_noise(current_block,temp_block);
				pre_emph(temp_block, current_block);
			
				levinson(current_block, record[i].reflect);
				record[i].energy = calc_energy(current_block);
			}
			//iir, pre-emph, schur av buffer --> add struct in record
			
			i = 0;
			float temp_reflec[N_REFLEC];
			while(poll(temp_block)){
				levinson(temp_block, record[i].reflect );
				record[i].energy = calc_energy(temp_block);
				i += 1;
			}

			int first = 0;
			int last = 0;
			cut(record, first, last);
			block_t output[SUBSET_LENGTH];
			create_subsets(record, first, last, output);
			// matching matching()
		} else { // if no speech
			
		}
	}
	
	/*
	//testa buffer
	put(b1);
	put(b2);
	put(b3);
	put(b4);
	//print();
	//printf("\n");
	//put(b5);
	//print();
	//printf("\n");
	//put(b6);
	//put(b7);
	//print();
	
	// testing to pick out and use the oldest element
	int length = get_length(); // get number of elements in buffer
	float temp[length][2];
	int old = poll(*temp); // get index to oldest element
	int i;
	float k;
	float tempvec[2] = {0};
	tempvec = temp[old];
	for(i = 0;i < 2; i++){
		k = temp[old][i];	
		tempvec[i] = k;
		printf("%f ", temp[old][i]);
	}
	printf("\n");
	for(i = 0; i < 2; i++){
		printf("%f ", tempvec[i]);
	}*/
	
	//testa level detection
	/*	test_signal(b1, b2, b3, b4, b5, b6);
	
	level_detect(b1);
	level_detect(b2);
	level_detect(b3);
	level_detect(b4);
	level_detect(b5); // kommer att ge en level detection i och med detta block
//	level_detect(b6);*/

	

	
	return 0;
}
