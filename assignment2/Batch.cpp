/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only */
#include "Batch.h"
#include "Vaccine.h"

Batch::Batch() {
	this->batchID = 0;
	char* name = new char[10];
	strcpy(name, "head");
	this->vaccineInBatch = new VaccineInBatch();
	this->nextBatch = NULL;
}

Batch::Batch(int id, Batch* head)
{
	this->batchID = id;
	/*
	if (is_ID_exist(head, id) == -1) {
		this->batchID = id;
	}
	else {
		this->batchID = auto_id(head, id+1);
		cout << "given id to constructor already taken!\nInstead Id:" << this->batchID << "given to batch!\n";
	}
	*/
	this->vaccineInBatch = new VaccineInBatch();
	this->nextBatch = NULL;	
}

Batch* Batch::getNextBatch()
{
	return this->nextBatch;
}

int Batch::getBatchID()
{
	return this->batchID;
}

VaccineInBatch* Batch::getVaccineInBatch()
{
	return this->vaccineInBatch;
}


void Batch::setNextBatch(Batch* batch)
{
	this->nextBatch = batch;
}

void Batch::setBatchID(Batch* batches,int batchID)
{
	if (is_ID_exist(batches, batchID) == -1) {
		this->batchID = batchID;
	}
	else {
		cout << "The batch id already exist!\n";
	}
}

void Batch::setVaccineInBatch(VaccineInBatch* vaccineInBatch)
{
	this->vaccineInBatch = vaccineInBatch;
}

void Batch::addVaccineInBatchList(VaccineInBatch* vaccineInBatch)
{
	VaccineInBatch* head = this->vaccineInBatch;
	if (head == NULL) {
		this->vaccineInBatch = vaccineInBatch;
	}
	else {
		VaccineInBatch* traversal = head;
		while (traversal->getNextVaccineInBatch() != NULL) {
			traversal = traversal->getNextVaccineInBatch();
		}
		traversal->setNextVaccineInBatch(vaccineInBatch);
	}
	
}

int Batch::is_ID_exist(Batch* batches, int id)
{
	Batch* traversal = batches;
	while (traversal->getNextBatch() != NULL) {
		if (traversal->batchID == id) {
			return -1;
		}
		traversal = traversal->getNextBatch();
	}
	return 1;
}

int Batch::auto_id(Batch* batches, int id)
{
	if (is_ID_exist(batches, id) == -1) {
		return id;
	}
	else {
		auto_id(batches, id + 1);
	}
}

