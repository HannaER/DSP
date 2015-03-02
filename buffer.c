#include <stdio.h>
#include "constants.h"
static pm float buffer[BUFFER * BLOCK_LENGTH];
static int length = 0;
static int index = 0;
static int oldest = 0;


void put(float* block)
{
	if (length < 3){
		length += 1;
	}
	
	int i;
	for(i = 0; i < BLOCK_LENGTH; i++){
		buffer[index*] = block[i];
	}

	index = (index + 1) % BUFFER;
	oldest = (index)%BUFFER;
	return;
}

int get_length(){
	return length;	
}


int poll(float* block){ // returns the index of the oldest element
	
	
	return ;
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
