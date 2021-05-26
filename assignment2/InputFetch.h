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
	static char* fetchString(const char[]);
	static Vaccine* fetchVaccine();
	static int fetchInt(const char[]);
	static MyDate* fetchDate();

	static int getStringSize(char*);
};

