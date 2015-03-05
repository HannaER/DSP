
/*****************************************************************************
 * speechrecognition.c
 *****************************************************************************/
//bibliotek
#include <stdio.h>
#include <processor_include.h>
#include <signal.h>

// funktioner och defines
#include "constants.h"
#include "Levinson.h"
#include "rm_noise.h"
#include "level_detect.h"
#include "buffer.h"
#include "cut.h"
#include "create_subsets.h"
#include "matching.h"
#include "framework.h"
#include "hamming.h"
#include "load_db.h"

// includes för tester

//#include <string.h>
//#include "fft_.h"
//#include "getX.h"
//#include "test_signal.h"


// testar get_x, iir och pre_emph
//float y[901];
//float x[901];
//float z[901];
//float overlapping_samples[OVERLAP]; // vektor där senaste samplade värdena sparas


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

static block_t record[N_BLOCKS + BUFFER]; // lista med structs som är inspelningen
static float sample_old[OVERLAP] = {0};
static float sample_new[OVERLAP] = {0};
static float sample_temp[OVERLAP] = {0};
static float current_block[BLOCK_LENGTH];
static float temp_block[BLOCK_LENGTH];
static version_t version;
static db_t current_db;
static result_t result;

static int state = 0;
static int counter = 0;
int threshold;


void process(int sig){


	sample_t* audioin = dsp_get_audio();    	
	int i,j, k;
	
	if(state == 0){	// init	
		sample_t* audioout = dsp_get_audio();
		for(i = 0; i < DSP_BLOCK_SIZE; ++i){
			sample_temp[i] = audioin[i].left;
		}
		rm_noise(sample_temp,sample_old);
		threshold = calc_norm(sample_old);
		set_threshold(threshold);
		state = 1;
		return;
	}
	
	if(state == 1){ // check level detection
		for(i = 0; i < DSP_BLOCK_SIZE; ++i){
			sample_new[i] = audioin[i].left;
		}
		rm_noise(sample_new,sample_temp);
		for(i = 0; i < OVERLAP; i++){
			current_block[i] = sample_old[i];
			current_block[OVERLAP + i] = sample_temp[i];
			sample_old[i] = sample_temp[i];
		}		
		if(level_detect(current_block)){ 
			dsp_set_leds(7);
			hamming(current_block, temp_block);				
			levinson(temp_block, record[BUFFER].reflect);
			record[BUFFER].energy = get_energy();
			state = 2;
			return;				
		}
	}
	if(state == 2){ // sample 1.5 seconds
		for(i = 0; i < DSP_BLOCK_SIZE; ++i){
			sample_new[i] = audioin[i].left;
		}
		rm_noise(sample_new,sample_temp);
		for(j = 0; j < OVERLAP; j++){
			current_block[j] = sample_old[j];
			current_block[OVERLAP + j] = sample_temp[j];
			sample_old[j] = sample_temp[j];
		}
		hamming(current_block, temp_block);
		levinson(temp_block, record[BUFFER + 1 + counter].reflect);
		record[BUFFER + 1 + counter].energy = calc_energy(temp_block);
		counter = counter + 1;
		if(counter == N_BLOCKS - 1){
			state = 3;
			counter = 0;
			return;
		}
		return;
	}
	if(state == 3){ // add buffer elements, cut --> subsets
		i = 0;
		while(poll(temp_block)){
			hamming(temp_block, current_block);
			levinson(current_block, record[i].reflect );
			record[i].energy = calc_energy(current_block);
			i += 1;
		}
		int first = 0;
		int last = 0;
		cut(record, &first, &last);
		create_subsets(record, first, last, &version);
		matching(current_db, version, &result);
		printf("The matched word is %s, error: %f \n", result.name, result.min_err);
		dsp_set_leds(63);
		state = 1;
		
		return;	
	}
	return;
}

int main(void)
{	
	
	int run = 1;
	load_db(&current_db);// init database shit 

	dsp_init();
	
	interrupt(SIG_SP1, process);
	
	dsp_start();

	while(run){
		idle();	
	}
	

	return 0;
}


	/*
	int i ;
	block_t t1, t2, t3;
	
	t1.reflect[0] = 2;
	t1.reflect[1] = 2;
	t1.energy = -1;
	
	t2.reflect[0] = 2;
	t2.reflect[1] = 3;
	t2.energy = -1;

	t3.reflect[0] = 3;
	t3.reflect[1] = 4;
	t3.energy = -1;
	
	version.subset[0] = t1;
	version.subset[1] = t2;
	version.subset[2] = t3;
	
	matching(current_db, version, result);*/


		/*
	sample_t* audioin = dsp_get_audio();
	sample_t* audioout = dsp_get_audio();
	
	int i;
	for(i = 0; i < DSP_BLOCK_SIZE; ++i){
		sample_new[i] = audioin[i].left;
	}
	
	rm_noise(sample_new,temp_block);
	//pre_emph(temp_block, current_block);
	
	if(level_detect(temp_block)){
		dsp_set_leds(7);
	}	
	    // Copy output buffer to left and right audio channels.
    for(i=0; i < DSP_BLOCK_SIZE; ++i) {
        audioout[i].left = temp_block[i];
        audioout[i].right = temp_block[i];
    }*/
    
	
	
	
	
	
	/*
	
	//testa create_subsets, ändra i constants.h
	int first = 0;
	//int last = 8;
	int last = 9;
	block_t UT[3]; 
	//block_t IN[9];
	block_t IN[10];
	IN[0].reflect[0] = 1;
	IN[0].reflect[1] = 4;
	IN[1].reflect[0] = 2;
	IN[1].reflect[1] = 5;
	IN[2].reflect[0] = 3;
	IN[2].reflect[1] = 6;
	IN[3].reflect[0] = 1;
	IN[3].reflect[1] = 2;
	IN[4].reflect[0] = 1;
	IN[4].reflect[1] = 2;
	IN[5].reflect[0] = 1;
	IN[5].reflect[1] = 2;
	IN[6].reflect[0] = 3;
	IN[6].reflect[1] = 6;
	IN[7].reflect[0] = 3;
	IN[7].reflect[1] = 6;
	IN[8].reflect[0] = 3;	
	IN[8].reflect[1] = 6;
	IN[9].reflect[0] = 3;	
	IN[9].reflect[1] = 6;					
	create_subsets(IN, first, last, UT);
	for(i = 0; i< 3; i++){
		printf("%f %f \n", UT[i].reflect[0], UT[i].reflect[1]);
	}*/
	
	
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
//	level_detect(b6);

}*/









