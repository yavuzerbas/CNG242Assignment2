#pragma once
class MyDate
{
private:
	int day;
	int month;
	int year;
public:
	MyDate();
	MyDate(int, int, int);

	int getDay();
	int getMonth();
	int getYear();

	void setDay(int);
	void setMonth(int);
	void setYear(int);
};

