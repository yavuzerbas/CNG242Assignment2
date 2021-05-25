/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only */
#include "Vaccine.h"
#include "MyDate.h"
#include <iostream>

int Vaccine::last_index = 0;
int Vaccine::ids[1000] = {};

//Constructors
using std::cout;

Vaccine::Vaccine()
{
	nextVaccine = NULL;
	this->vaccineID = auto_id(1);

	this->vaccineName = new char[100];
	strcpy(vaccineName, "default vaccine name");
	
	this->producerCompany = new char[100];
	strcpy(this->producerCompany, "default producer company");
	
	this->originCountry = new char[100];
	strcpy(this->originCountry, "default origin country");

	this->telephoneNumber = new char[100];
	strcpy(this->originCountry, "default telephone number");

	this->EUA_date = new MyDate();

	this->numberofDosesNeeded = 0;
	this->timeBetweenDoses = 0;
	this->cost = 0.0;
	this->efficacy = 0.0;
}

Vaccine::Vaccine(char* vaccineName)
{
	nextVaccine = NULL;
	this->vaccineID = auto_id(1);

	strcpy(this->vaccineName, vaccineName);

	this->producerCompany = new char[100];
	strcpy(this->producerCompany, "default producer company");

	this->originCountry = new char[100];
	strcpy(this->originCountry, "default origin country");

	this->telephoneNumber = new char[100];
	strcpy(this->originCountry, "default telephone number");

	this->EUA_date = new MyDate();

	this->numberofDosesNeeded = 0;
	this->timeBetweenDoses = 0;
	this->cost = 0.0;
	this->efficacy = 0.0;

}

Vaccine::Vaccine(int vaccineID, char* vaccineName, char* producerCompany, char* originCountry, char* telephoneNumber
	, MyDate* myDate, int numberofDosesNeeded, int timeBetweenDoses, float cost, double efficacy)
{
	nextVaccine = NULL;
	this->vaccineID = vaccineID;
	ids[last_index] = vaccineID;
	last_index++;
	this->vaccineName = new char[100];
	this->producerCompany = new char[100];
	this->originCountry = new char[100];
	this->telephoneNumber = new char[100];
	strcpy(this->vaccineName, vaccineName);
	strcpy(this->producerCompany, producerCompany);
	strcpy(this->originCountry, originCountry);
	strcpy(this->telephoneNumber, telephoneNumber);
	this->EUA_date = myDate;
	this->numberofDosesNeeded = numberofDosesNeeded;
	this->timeBetweenDoses = timeBetweenDoses;
	this->cost = cost;
	this->efficacy = efficacy;
}

// Getters

Vaccine* Vaccine::getNextVaccine()
{
	return this->nextVaccine;
}

int Vaccine::getVaccineID()
{
	return this->vaccineID;
}

char* Vaccine::getVaccineName()
{
	return this->vaccineName;
}

char* Vaccine::getProducerCompany()
{
	return this->producerCompany;
}

char* Vaccine::getOriginCountry()
{
	return this->originCountry;
}

char* Vaccine::getTelephoneNumber()
{
	return this->telephoneNumber;
}

MyDate* Vaccine::getEUA_date()
{
	return this->EUA_date;
}

int Vaccine::getNumberofDosesNeeded()
{
	return this->numberofDosesNeeded;
}

int Vaccine::getTimeBetweenDoses()
{
	return this->timeBetweenDoses;
}

float Vaccine::getCost()
{
	return this->cost;
}

double Vaccine::getEfficacy()
{
	return this->efficacy;
}

//Setters

void Vaccine::setNextVaccine(Vaccine* nextVaccine)
{
	this->nextVaccine = nextVaccine;
}

void Vaccine::setVaccineID(int vaccineID)
{
	this->vaccineID = vaccineID;
}

void Vaccine::setVaccineName(char* vaccineName)
{
	this->vaccineName = vaccineName;
}

void Vaccine::setProducerCompany(char* producerCompany)
{
	this->producerCompany = producerCompany;
}

void Vaccine::setOriginCountry(char* originCountry)
{
	this->originCountry = originCountry;
}

void Vaccine::setTelephoneNumber(char* telephoneNumber)
{
	this->telephoneNumber = telephoneNumber;
}

void Vaccine::setEUA_date(MyDate* EUA_date)
{
	this->EUA_date = EUA_date;
}

void Vaccine::setNumberofDosesNeeded(int numberofDoses)
{
	if(numberofDoses >= 0)
		this->numberofDosesNeeded = numberofDoses;
}

void Vaccine::setTimeBetweenDoses(int timeBetweenDoses)
{
	if(timeBetweenDoses >= 0)
		this->timeBetweenDoses = timeBetweenDoses;
}

void Vaccine::setCost(float cost) 
{
	if(cost >= 0)
		this->cost = cost;
}

void Vaccine::setEfficacy(double efficacy)
{
	if (efficacy >= 0 && efficacy <= 100) {
		this->efficacy = efficacy;
	}
	else {
		cout << "\nInvalid efficacy value!\n";
	}
}

//functions to create "automatic id" and "checking if id exists"

int Vaccine::id_location_find(int id)
{
	for (int i = 0; i < last_index; i++) {
		if (ids[i] == id) {
			return i;
		}
	}
	return -1;
}

int Vaccine::auto_id(int id) {
	if (id_location_find(id) == -1) {
		ids[last_index] = id;
		last_index++;
		return id;
	}
	else {
		auto_id(id + 1);
	}
}

void Vaccine::printVaccine(Vaccine* vaccine)
{
	if (vaccine == NULL) {
		cout << "\nThe vaccine doesn't exist!\n";
	}
	else {
		cout << "Type:" << vaccine->getVaccineName() << "\n"
			<< "Vaccine ID:" << vaccine->getVaccineID() << "\n";
			//...
	}
}

void Vaccine::addVaccineList(Vaccine* head, Vaccine* newVaccine)
{
	Vaccine* traversal = head;
	while (traversal->nextVaccine != NULL) {
		traversal = traversal->nextVaccine;
	}
	traversal->nextVaccine = newVaccine;

}




