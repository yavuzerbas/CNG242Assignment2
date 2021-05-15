#include "AdenovirusBased.h"
#include "iostream"

AdenovirusBased::AdenovirusBased() {
	sideEffect = None;
	discountRate = 0.0;
}

AdenovirusBased::SideEffect AdenovirusBased::getSideEffect() {
	return this->sideEffect;
}

double AdenovirusBased::getDiscountRate() {
	return this->discountRate;
}

void AdenovirusBased::setSideEffect(AdenovirusBased::SideEffect sideEffect) {
	this->sideEffect = sideEffect;
}

void AdenovirusBased::setDiscountRate(double discountRate) {
	if (discountRate > 20.0) {
		std::cout << "Discount rate cannot be bigger than 20%!\nAuto set to 20%";
		this->discountRate = 20.0;
	}
	else if (discountRate < 0.0) {
		std::cout << "Discount rate cannot be negative! Auto set to 0%!\n";
		this->discountRate = 0.0;
	}
	else {
		this->discountRate = discountRate;
	}
}