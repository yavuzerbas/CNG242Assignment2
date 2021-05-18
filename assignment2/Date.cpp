#include "Date.h"
#include <iostream>

Date::Date() {
	this->day = 1;
	this->month = 1;
	this->year = 2000;
}

Date::Date(int day, int month, int year) {
	if ((day > 0) && (day <= 31)) {
		this->day = day;
	}
	else {
		this->day = 1;
		std::cout << "Invalid day entered to Date class! Set to 1 as default.\n";
	}
	if ((month > 0) && (month < 13)) {
		this->month = month;
	}
	else {
		this->month = 1;
		std::cout << "Invalid month entered to Date class! Set to 1 as default.\n";
	}
	this->year = year;
}

int Date::getDay() {

	return this->day;
}

int Date::getMonth() {

	return this->month;
}

int Date::getYear(){

	return this->year;
}

void Date::setDay(int day) {
	if ((day > 0) && (day <= 31)) {
		this->day = day;
	}
	else {
		this->day = 1;
		std::cout << "Invalid day entered to setDay() function! Set to 1 as default.\n";
	}
}

void Date::setMonth(int month) {
	if ((month > 0) && (month < 13)) {
		this->month = month;
	}
	else {
		this->month = 1;
		std::cout << "Invalid month entered to setMonth() function! Set to 1 as default.\n";
	}
}

void Date::setYear(int year) {

	this->year = year;
}