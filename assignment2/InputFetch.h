#pragma once
#include <iostream>
#include "Vaccine.h"
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

	static int getStringSize(char*);
};

