#include "VaccineInBatch.h"

VaccineInBatch::VaccineInBatch()
{
	char* name = new char[20];
	strcpy(name, "VaccineInBatchHead");
	this->vaccine = new Vaccine(name);
	this->amount = 0;
	this->expiryDate = NULL;
	this->nextVaccineInBatch = NULL;

}

VaccineInBatch::VaccineInBatch(Vaccine* vaccine, int amount, MyDate* expiryDate)
{
	this->vaccine = vaccine;
	this->amount = amount;
	this->expiryDate = expiryDate;
	this->nextVaccineInBatch = NULL;
}

int VaccineInBatch::getAmount()
{
	return this->amount;
}

MyDate* VaccineInBatch::getExpiryDate()
{
	return this->expiryDate;
}

void VaccineInBatch::setAmount(int amount)
{
	this->amount = amount;
}

void VaccineInBatch::setExpiryDate(MyDate* expiryDate)
{
	this->expiryDate = expiryDate;
}

void VaccineInBatch::setNextVaccineInBatch(VaccineInBatch* nextVaccineInBatch)
{
	this->nextVaccineInBatch = nextVaccineInBatch;
}
