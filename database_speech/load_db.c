
#include "load_db.h"

void load_db(void){
	block_t b1, b2 ;
	b1.reflec = {1,2};
	b1.energy = -1;
	
	b2.reflec = {2,3};
	b2.energy = -1;

	b3.reflec = {3,4};
	b3.energy = -1;


	version_t version1;

	version1[0] = b1;
	version1[1] = b2;
	version1[2] = b3;

	b1.reflec = {2,3};
	b1.energy = -1;
	
	b2.reflec = {3,4};
	b2.energy = -1;

	b3.reflec = {4,5};
	b3.energy = -1;

	version_t version2;

	version2[0] = b1;
	version2[1] = b2;
	version2[2] = b3;

	b1.reflec = {3,4};
	b1.energy = -1;
	
	b2.reflec = {4,5};
	b2.energy = -1;

	b3.reflec = {5,6};
	b3.energy = -1;

	version_t version3;

	version3[0] = b1;
	version3[1] = b2;
	version3[2] = b3;

	word_t word1;

	word1.version[0] = version1;
	word1.version[1] = version2;
	word1.version[2] = version3;

	db_t database;
	database.words[0] = word1;



}