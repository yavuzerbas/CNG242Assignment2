/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only */
#include "MyDate.h"
#include <iostream>

MyDate::MyDate() {
	this->day = 1;
	this->month = 1;
	this->year = 2000;
}

MyDate::MyDate(int day, int month, int year) {
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

int MyDate::getDay() {

	return this->day;
}

int MyDate::getMonth() {

	return this->month;
}

int MyDate::getYear(){

	return this->year;
}

void MyDate::setDay(int day) {
	if ((day > 0) && (day <= 31)) {
		this->day = day;
	}
	else {
		this->day = 1;
		std::cout << "Invalid day entered to setDay() function! Set to 1 as default.\n";
	}
}

void MyDate::setMonth(int month) {
	if ((month > 0) && (month < 13)) {
		this->month = month;
	}
	else {
		this->month = 1;
		std::cout << "Invalid month entered to setMonth() function! Set to 1 as default.\n";
	}
}

void MyDate::setYear(int year) {

	this->year = year;
}