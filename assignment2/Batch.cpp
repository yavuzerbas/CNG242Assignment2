#include "Batch.h"
#include "Vaccine.h"

Batch::Batch() {
	this->batchID = 0;
	this->vaccines = new Vaccine[];
}

