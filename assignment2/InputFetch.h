#pragma once
#include <iostream>
#include "Vaccine.h"
#include "Batch.h."
#include "MyDate.h"
#include "mRNA.h"
#include "AdenovirusBased.h"
#include "Inactivated.h"
#include "VaccinationCenter.h"

using std::cin;
using std::cout;
class InputFetch
{
public:
	static char* fetchString(const char[]);
	Vaccine* fetchVaccine();
	static void fetchBatch(Batch*, Vaccine*);
	static int fetchInt(const char[]);
	static MyDate* fetchDate();
	void addVaccineList(Vaccine*);
	

	static int getStringSize(char*);
};

