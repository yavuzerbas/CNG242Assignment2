/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only */
#include "AdenovirusBased.h"

AdenovirusBased::AdenovirusBased() {
	sideEffect = SideEffect::Non;
	discountRate = 0.0;
}

AdenovirusBased::SideEffect AdenovirusBased::getSideEffect() {
	return this->sideEffect;
}

char* AdenovirusBased::getSideEffectName()//returning sideEffect as string
{
	char* sideEffect = new char[20];
	if (this->sideEffect == SideEffect::Non) {
		strcpy(sideEffect, "Non");
		return sideEffect;
	}
	else if (this->sideEffect == SideEffect::BloodClots) {
		strcpy(sideEffect, "BloodClots");
		return sideEffect;
	}
	else if (this->sideEffect == SideEffect::Headache) {
		strcpy(sideEffect, "Headache");
		return sideEffect;
	}
	else if (this->sideEffect == SideEffect::Stomachache) {
		strcpy(sideEffect, "Stomachache");
		return sideEffect;
	}
	else {
		return nullptr;
	}
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