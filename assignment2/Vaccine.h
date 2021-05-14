#pragma once

class Vaccine
{
private:
	int vaccineID;
	char* vaccineName;
	char* producerCompany;
	char* originCountry;
	char* telephoneNumber;
	char* EUA_date;
	int numberofDosesNeeded;
	int timeBetweenDoses;
	float cost;
	double efficacy;
public:
	Vaccine();
	int getVaccineID();
	char* getVaccineName();
	char* getProducerCompany();
	char* getOriginCountry();
	char* getTelephoneNumber();
	char* getEUA_date();
	int getNumberofDosesNeeded();
	int getTimeBetweenDoses();
	float getCost();
	double getEfficacy();

	void setVaccineID(int);
	void setVaccineName(char*);
	void setProducerCompany(char*);
	void setOriginCountry(char*);
	void setTelephoneNumber(char*);
	void setEUA_date(char*);
	void setNumberofDosesNeeded(int);
	void setTimeBetweenDoses(int);
	void setCost(float);
	void setEfficacy(double);

};

