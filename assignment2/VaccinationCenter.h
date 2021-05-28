/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only */
#pragma once
#include "Batch.h"
#include "Vaccine.h"
#include "InputFetch.h"
class VaccinationCenter
{
public:
	void addNewBatch(Batch);
	void displayDetailsofVaccine(Vaccine*, int);//vaccines[] ,vaccineID
	void printTypesofaBatch(Batch);
	void printCurrentExpenditure();
	void costofGivenBatch(Batch);
	void addBatchList(Batch*);
};

