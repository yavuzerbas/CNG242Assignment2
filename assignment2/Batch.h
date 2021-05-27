#pragma once
#include <iostream>
#include "Vaccine.h"
#include "mRNA.h"
#include "AdenovirusBased.h"
#include "Inactivated.h"
using std::cout;
using std::cin;
class Batch
{
private:
	Batch* nextBatch;
	int batchID;
	mRNA* mRNA_vaccines;
	AdenovirusBased* adenovirusBased_vaccines;
	Inactivated* inactivated_vaccines;
public:
	Batch();
	Batch(int, Batch*);
	int getBatchID();
	mRNA* get_mRNA_vaccines(Batch*);
	AdenovirusBased* get_adenovirusBased_vaccines(Batch*);
	Inactivated* get_inactivated_vaccines(Batch*);

	void setBatchID(Batch*, int);
	void set_mRNA_vaccines(mRNA*);
	void set_adenovirusBased_vaccines(AdenovirusBased*);
	void set_inactivated_vaccines(Inactivated*);

	int is_ID_exist(Batch*, int);
	int auto_id(Batch*, int);
};

