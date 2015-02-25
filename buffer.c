
static float buffer[BUFFER_LENGTH][BLOCK_LENGTH];
static int length = 0;
static int index = 0;

void put(float* block)
{
	if (length < 3){
		length += 1;
	}

	int i;
	for(i = 0; i < BLOCK_LENGTH, i++){
		buffer[index][i] = block[i];
	}

	index = (index + 1) % BUFFER_LENGTH;
}


int poll(float* blocks){
	for (int i = 0; i < length; ++i)
	{
		for (int j = 0; j < BLOCK_LENGTH; ++j)
		{
			blocks[i][j] = buffer[i][j];
		}
	}

	return length;
}

void print(){
	for (int i = 0; i < length; ++i)
	{
		for (int j = 0; j < BLOCK_LENGTH; ++j)
		{
			printf ("%f \n", blocks[i][j]);
		}
	}
}