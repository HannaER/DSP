#include <stdio.h>
#include "constants.h"
static float buffer[BUFFER][BLOCK_LENGTH];
static int length = 0;
static int index = 0;

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
	return;
}



int poll(float** blocks){
	int i,j;
	for (i = 0; i < length; ++i)
	{
		for (j = 0; j < BLOCK_LENGTH; ++j)
		{
			blocks[i][j] = buffer[i][j];
		}
	}

	return length;
}


void print(){
	int i,j;
	for (i = 0; i < length; ++i)
	{
		for (j = 0; j < BLOCK_LENGTH; ++j)
		{
			printf ("%f \n", buffer[i][j]);
		}
	}
	return;
}
