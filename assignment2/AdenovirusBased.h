/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only */
#pragma once
#include "Vaccine.h"
#include <iostream>
class AdenovirusBased : public Vaccine
{
public:
	enum class SideEffect { Non, BloodClots, Headache, Stomachache };
private:
	SideEffect sideEffect;
	double discountRate;
public:
	AdenovirusBased();
	AdenovirusBased(int vaccineID, char* vaccineName, char* producerCompany, char* originCountry, char* telephoneNumber
		, MyDate* myDate, int numberofDosesNeeded, int timeBetweenDoses, float cost, double efficacy, SideEffect sideEffect,
		double discountRate) :Vaccine(vaccineID, vaccineName, producerCompany,
			originCountry, telephoneNumber, myDate, numberofDosesNeeded, timeBetweenDoses, cost, efficacy) {
		this->sideEffect = sideEffect;
		this->discountRate = discountRate;
	}
	SideEffect getSideEffect();
	char* getSideEffectName();
	double getDiscountRate();
	void setSideEffect(SideEffect);
	void setDiscountRate(double);
};

