/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only */
#include "Batch.h"
#include "Vaccine.h"

Batch::Batch() {
	this->batchID = 0;
	char* name = new char[10];
	strcpy(name, "head");

	this->mRNA_vaccines = new mRNA();
	this->mRNA_vaccines->setVaccineName(name);

	this->adenovirusBased_vaccines = new AdenovirusBased();
	adenovirusBased_vaccines->setVaccineName(name);

	this->inactivated_vaccines = new Inactivated();
	inactivated_vaccines->setVaccineName(name);
}

Batch::Batch(int id, Batch* batches)
{
	if (is_ID_exist(batches, id) == -1) {
		this->batchID = id;
	}
	else {
		this->batchID = auto_id(batches, id+1);
		cout << "given id to constructor already taken!\nInstead Id:" << this->batchID << "given to batch!\n";
	}

	char* name = new char[10];
	strcpy(name, "head");

	this->mRNA_vaccines = new mRNA();
	this->mRNA_vaccines->setVaccineName(name);

	this->adenovirusBased_vaccines = new AdenovirusBased();
	adenovirusBased_vaccines->setVaccineName(name);

	this->inactivated_vaccines = new Inactivated();
	inactivated_vaccines->setVaccineName(name);
}

int Batch::getBatchID()
{
	return this->batchID;
}

mRNA* Batch::get_mRNA_vaccines(Batch* batch)
{
	return this->mRNA_vaccines;
}

AdenovirusBased* Batch::get_adenovirusBased_vaccines(Batch*)
{
	return this->adenovirusBased_vaccines;
}

Inactivated* Batch::get_inactivated_vaccines(Batch*)
{
	return this->inactivated_vaccines;
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

void Batch::set_mRNA_vaccines(mRNA* mRNA_vaccines)
{
	this->mRNA_vaccines = mRNA_vaccines;
}

void Batch::set_adenovirusBased_vaccines(AdenovirusBased* adenovirusBased_vaccines)
{
	this->adenovirusBased_vaccines = adenovirusBased_vaccines;
}

void Batch::set_inactivated_vaccines(Inactivated* inactivated_vaccines)
{
	this->inactivated_vaccines = inactivated_vaccines;
}

int Batch::is_ID_exist(Batch* batches, int id)
{
	Batch* traversal = batches;
	while (traversal->nextBatch != NULL) {
		if (traversal->batchID == id) {
			return -1;
		}
		traversal = traversal->nextBatch;
	}
	return 0;
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

