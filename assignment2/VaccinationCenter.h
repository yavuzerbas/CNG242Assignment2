#pragma once
#include "Batch.h"
#include "Vaccine.h"
class VaccinationCenter
{
public:
	void addNewBatch(Batch);
	void displayDetailsofVaccine(Vaccine*, int);//vaccines[] ,vaccineID
	void printTypesofaBatch(Batch);
	void printCurrentExpenditure();
	void costofGivenBatch(Batch);
};

