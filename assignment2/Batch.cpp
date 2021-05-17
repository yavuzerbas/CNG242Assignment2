#include "Batch.h"
#include "Vaccine.h"

Batch::Batch() {
	this->batchID = 0;
	this->vaccines = new Vaccine[];
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