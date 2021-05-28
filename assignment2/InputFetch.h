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
	static char* fetchString(const char[]);
	Vaccine* fetchVaccine();
	static Batch* fetchBatch(Batch*);
	static int fetchInt(const char[]);
	MyDate* fetchDate();
	void addVaccineList(Vaccine*);
	

	static int getStringSize(char*);
};

