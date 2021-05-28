/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only */

#pragma once
#include "MyDate.h"
//#include "InputFetch.h"

class Vaccine
{
private:
	int vaccineType;
	Vaccine* nextVaccine;
	int vaccineID;
	char* vaccineName, *producerCompany, *originCountry, *telephoneNumber;
	MyDate* EUA_date;
	int numberofDosesNeeded, timeBetweenDoses;
	float cost;
	double efficacy;
public:
	static int last_index, ids[1000];
	Vaccine();
	Vaccine(char*);
	Vaccine(int, char*, char*, char*, char*, MyDate*, int, int, float, double);
	Vaccine(int, char*, char*, char*, char*, MyDate*, int, int, float, double,int); // with vaccineType

	Vaccine* getNextVaccine();
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
	int getVaccineType();

	void setNextVaccine(Vaccine*);
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
	void setVaccineType(int);

	static int id_location_find(int);
	int auto_id(int);
	static Vaccine* findVaccineWithID(Vaccine*,int);

	static void printVaccine(Vaccine*);
	//static void addVaccineList(Vaccine*);
};

