/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only */
#include <iostream>
#include "Vaccine.h"
#pragma once
class mRNA : public Vaccine
{
private:
	int storageTemperature;
	int redesignTime;
public:
	mRNA();
	mRNA(int, int);
	mRNA(int vaccineID, char* vaccineName, char* producerCompany, char* originCountry, char* telephoneNumber,
		MyDate* myDate, int numberofDosesNeeded, int timeBetweenDoses, float cost, double efficacy, int storageTemperature, int resignTime, int vaccineType)
		:Vaccine(vaccineID, vaccineName, producerCompany, originCountry, telephoneNumber, 
		myDate, numberofDosesNeeded, timeBetweenDoses, cost, efficacy, 1) {
			this->storageTemperature = 10;
			this->redesignTime = 10;
	}
	int getStorageTemperature();
	int getRedesignTime();
	void setStorageTemperature(int);
	void setRedesignTime(int);
};

