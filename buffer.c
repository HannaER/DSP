#include <stdio.h>
#include "constants.h"
static float buffer[BUFFER][BLOCK_LENGTH];
static int length = 0;
static int index = 0;
static int oldest = 0;

// måste skrivas om så att äldsta elementet alltid skrivs 
// ut och pollas först, dvs att index 0 alltid är äldsta
// vektorn

void put(float* block)
{
	if (length < 3){
		length += 1;
	}
	
	int i;
	for(i = 0; i < BLOCK_LENGTH; i++){
		buffer[index][i] = block[i];
	}

	index = (index + 1) % BUFFER;
	oldest = (index)%BUFFER;
	return;
}

int get_length(){
	return length;	
}


int poll(float* blocks){ // returns the index of the oldest element
	
	memcpy(blocks, *buffer, length*BLOCK_LENGTH );
	return oldest;
}


void print(){
	int i,j;
	for (i = 0; i < length; ++i)
	{
		for (j = 0; j < BLOCK_LENGTH; ++j)
		{
			printf ("%f ", buffer[(oldest + i)%BUFFER][j]);
		}
		printf("\n");
	}
	return;
}
