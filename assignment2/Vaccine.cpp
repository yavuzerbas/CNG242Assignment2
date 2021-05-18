#include "Vaccine.h"
#include "MyDate.h"

int Vaccine::lastID = 0;

//Constructors

Vaccine::Vaccine()
{
	this->vaccineID = lastID + 1;
	lastID++;
	this->vaccineName = new char(20);
	vaccineName[0] = 'a';
	vaccineName[1] = 'b';
	vaccineName[2] = 'c';
	vaccineName[3] = '\0';
	this->EUA_date = new MyDate();

}

//Getters

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
	if(efficacy >= 0)
		this->efficacy = efficacy;
}