#pragma once
#include "Vaccine.h"

class Batch
{
private:
	int batchID;
	Vaccine * vaccines;
public:
	Batch();
	
	int getBatchID();
	Vaccine * getVaccines();
	void setBatchID(int);
	void setVaccines(Vaccine*);
};

