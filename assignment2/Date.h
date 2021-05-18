#pragma once
class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int, int, int);

	int getDay();
	int getMonth();
	int getYear();

	void setDay(int);
	void setMonth(int);
	void setYear(int);
};

