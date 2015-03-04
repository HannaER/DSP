#include "load_db.h"
void load_db(void){
	block_t b1, b2, b3 ;
	b1.reflect[0] = 1;
	b1.reflect[1] = 2;
	b1.energy = -1;
	
	b2.reflect[0] = 2;
	b2.reflect[1] = 3;
	b2.energy = -1;

	b3.reflect[0] = 3;
	b3.reflect[1] = 4;
	b3.energy = -1;


	version_t version1;

	version1.version[0] = b1;
	version1.version[1] = b2;
	version1.version[2] = b3;

	
	b1.reflect[0] = 2;
	b1.reflect[1] = 3;
	b1.energy = -1;
	
	b2.reflect[0] = 3;
	b2.reflect[1] = 4;
	b2.energy = -1;

	b3.reflect[0] = 4;
	b3.reflect[1] = 5;
	b3.energy = -1;

	version_t version2;

	version2.version[0] = b1;
	version2.version[1] = b2;
	version2.version[2] = b3;
	
	b1.reflect[0] = 3;
	b1.reflect[1] = 4;
	b1.energy = -1;
	
	b2.reflect[0] = 4;
	b2.reflect[1] = 5;
	b2.energy = -1;

	b3.reflect[0] = 5;
	b3.reflect[1] = 6;
	b3.energy = -1;
	
	version_t version3;

	version3.version[0] = b1;
	version3.version[1] = b2;
	version3.version[2] = b3;

	word_t word1;

	word1.word[0] = version1;
	word1.word[1] = version2;
	word1.word[2] = version3;
	word1.name = "Test: word1";
	db_t database;
	database.db[0] = word1;
	


	return;
}

