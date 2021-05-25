/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only */
#include "Vaccine.h"
#pragma once
class Inactivated : public Vaccine
{
public:
	enum class InactivatedType { SarsCOV2, WeakenedCOV19 };
private:
	InactivatedType inactivatedType;
	double mililitres;
public:
	Inactivated();
	Inactivated(int vaccineID, char* vaccineName, char* producerCompany, char* originCountry, char* telephoneNumber,
		MyDate* myDate, int numberofDosesNeeded, int timeBetweenDoses, 
		float cost, double efficacy, InactivatedType inactivatedType, double mililitres) :
		Vaccine(vaccineID, vaccineName, producerCompany,
		originCountry, telephoneNumber, myDate, numberofDosesNeeded, timeBetweenDoses, cost, efficacy) {
			this->inactivatedType = inactivatedType;
			this->mililitres = mililitres;
	}
	char* getInactivatedTypeName();
	InactivatedType getInactivatedType();
	double getMililitres();
	void setInactivatedType(InactivatedType);
	void setMililitres(double);
};

