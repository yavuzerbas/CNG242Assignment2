#pragma once
#include "MyDate.h"

class Vaccine
{
	static int lastID;
private:
	int vaccineID;
	char* vaccineName;
	char* producerCompany;
	char* originCountry;
	char* telephoneNumber;
	MyDate* EUA_date;
	int numberofDosesNeeded;
	int timeBetweenDoses;
	float cost;
	double efficacy;
public:
	Vaccine();
	int getVaccineID();
	char* getVaccineName();
	char* getProducerCompany();
	char* getOriginCountry();
	char* getTelephoneNumber();
	MyDate* getEUA_date();
	int getNumberofDosesNeeded();
	int getTimeBetweenDoses();
	float getCost();
	double getEfficacy();

	void setVaccineID(int);
	void setVaccineName(char*);
	void setProducerCompany(char*);
	void setOriginCountry(char*);
	void setTelephoneNumber(char*);
	void setEUA_date(MyDate*);
	void setNumberofDosesNeeded(int);
	void setTimeBetweenDoses(int);
	void setCost(float);
	void setEfficacy(double);

};

