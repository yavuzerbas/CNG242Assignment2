/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only */
#include "mRNA.h"

mRNA::mRNA() {
	storageTemperature = 0;
	redesignTime = 0;
}

mRNA::mRNA(int storageTemperature, int redesignTime) {
	this->storageTemperature = storageTemperature;
	this->redesignTime = redesignTime;
}

int mRNA::getStorageTemperature() {
	return this->storageTemperature;
}

int mRNA::getRedesignTime() {
	return this->redesignTime;
}

void mRNA::setStorageTemperature(int storageTemperature) {
	if ((storageTemperature < 100) && (storageTemperature > -279)) {
		this->storageTemperature = storageTemperature;
	}
	else {
		std::cout << "Enter a valid temperature in Celcius!\n";
	}
}

void mRNA::setRedesignTime(int redesignTime) {
	if (redesignTime >= 0) {
		this->redesignTime = redesignTime;
	}
	else {
		std::cout << "redesign time cannot be negative!\n";
	}
}