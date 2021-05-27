#pragma once
#include <iostream>
#include "Vaccine.h"
#include "Batch.h."
#include "MyDate.h"
#include "mRNA.h"
#include "AdenovirusBased.h"
#include "Inactivated.h"

using std::cin;
using std::cout;
class InputFetch
{
public:
	char* fetchString(const char[]);
	Vaccine* fetchVaccine();
	int fetchInt(const char[]);
	MyDate* fetchDate();
	void addVaccineList(Vaccine*);
	void addBatchList(Batch*);

	static int getStringSize(char*);
};

