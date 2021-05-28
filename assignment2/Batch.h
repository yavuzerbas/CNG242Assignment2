#pragma once
#include <iostream>
#include "Vaccine.h"
#include "VaccineInBatch.h"

using std::cout;
using std::cin;
class Batch
{
private:
	Batch* nextBatch;
	int batchID;
	VaccineInBatch* vaccineInBatch;
	
public:
	Batch();
	Batch(int, Batch*);
	
	Batch* getNextBatch();
	int getBatchID();
	VaccineInBatch* getVaccineInBatch();

	void setNextBatch(Batch*);
	void setBatchID(Batch*, int);
	void setVaccineInBatch(VaccineInBatch*);

	static int is_ID_exist(Batch*, int);
	static int auto_id(Batch*, int);
};

