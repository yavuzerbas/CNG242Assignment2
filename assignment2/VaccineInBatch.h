#pragma once
#include <iostream>
#include "Vaccine.h"
#include "MyDate.h"
class VaccineInBatch
{
private:
	Vaccine* vaccine;
	VaccineInBatch* nextVaccineInBatch;
	int amount;
	MyDate* expiryDate;
public:
	VaccineInBatch();
	VaccineInBatch(Vaccine*,int,MyDate*);

	int getAmount();
	MyDate* getExpiryDate();
	VaccineInBatch* getNextVaccineInBatch;

	void setAmount(int);
	void setExpiryDate(MyDate*);
	void setNextVaccineInBatch(VaccineInBatch*);
};

