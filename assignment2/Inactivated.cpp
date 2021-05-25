/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only */
#include "Inactivated.h"
#include <iostream>

Inactivated::Inactivated() {
	this->mililitres = 0.0;
	this->inactivatedType = InactivatedType::WeakenedCOV19;
}

char* Inactivated::getInactivatedTypeName() {
	if (this->inactivatedType == InactivatedType::SarsCOV2) {
		char* name = new char[20];
		strcpy(name, "SarsCOV2");
		return name;
	}
	else {
		char* name = new char[20];
		strcpy(name, "WeakenedCOV19");
		return name;
	}
}

Inactivated::InactivatedType Inactivated::getInactivatedType()
{
	return InactivatedType();
}

double Inactivated::getMililitres() {
	return this->mililitres;
}

void Inactivated::setInactivatedType(Inactivated::InactivatedType inactivatedType) {
	this->inactivatedType = inactivatedType;
}
void Inactivated::setMililitres(double mililitres) {
	if (mililitres < 0.0) {
		std::cout << "mililitres cannot be negative!";
	}
	else {
		this->mililitres = mililitres;
	}
}