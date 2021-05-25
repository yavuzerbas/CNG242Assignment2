/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only */
#include "Batch.h"
#include "Vaccine.h"

Batch::Batch() {
	this->batchID = 0;
	this->vaccines = new Vaccine[10];
}

int Batch::getBatchID() {
	return this->batchID;
}

Vaccine* Batch::getVaccines() {
	return this->vaccines;
}

void Batch::setBatchID(int batchID) {
	this->batchID = batchID;
}

void Batch::setVaccines(Vaccine* vaccines) {
	this->vaccines = vaccines;
}