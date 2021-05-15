#include "Inactivated.h"
#include <iostream>

Inactivated::Inactivated() {
	this->mililitres = 0.0;
	this->inactivatedType = WeakenedCOV19;
}

Inactivated::InactivatedType Inactivated::getInactivatedType() {
	return this->inactivatedType;
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