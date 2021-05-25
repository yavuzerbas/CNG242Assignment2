/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only */
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

