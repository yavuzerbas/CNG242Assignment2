#include "InputFetch.h"

char* InputFetch::fetchString(const char message[])
{
	char inputChar;
	char* inputString = new char[100];
	int i = 0;
	cout << message;
	cin.ignore();
	while (cin.get(inputChar) && (inputChar != '\n')) {        /* read a character at a time */
		inputString[i] = inputChar;
		i++;
		if (inputChar == '\n') {
			cout << "enter key pressed\n";
		}
	}
	inputString[i] = '\0';


	return inputString;
}
int InputFetch::getStringSize(char* string)
{
	int counter = 0;
	while (string[counter] != '\0') {
		counter++;
	}
	return counter;
}
int InputFetch::fetchInt(const char message[])
{
	char* line = fetchString(message);
	if (line[0] == 'x') {
		cout << "\nExitted while taking integer input!\n\n";
		return -900000000;
	}
	int counter = 0, convertedInt = 0;
	int stringSize = getStringSize(line);
	while (stringSize > 0) {
		if (!isdigit(line[stringSize - 1])) {
			cout << "Unable to get integer input!\n\n";
			return -999999999;
		}
		else {
			convertedInt += (line[stringSize - 1] - 48) * (int)pow(10, counter);
		}

		stringSize--;
		counter++;
	}
	return convertedInt;
}

MyDate* InputFetch::fetchDate()
{
	char* line = fetchString("EUA Date(x to exit):");
	if (line[0] == 'x') {
		return NULL;
	}
	int stringSize = getStringSize(line);
	int slashCounter = 0, i = 0, dateCounter = 0;
	int day = 0, month = 0, year = 0, temp, temp2, temp3;
	while (slashCounter != 3 && line[i] != '\0') {
		if (line[i] == '/') {
			return NULL; // slash without a number
		}
		else if (line[i] == '\0') {
			slashCounter++;
		}
		else if (slashCounter == 0) {
			while (line[i] != '/') {
				if (dateCounter >= 2) {
					return NULL;
				}
				day += (line[i] - 48) * (int)pow(10, dateCounter);
				i++;
				dateCounter++;
			}
			slashCounter++;
			dateCounter = 0;
		}
		else if (slashCounter == 1) {
			while (line[i] != '/') {
				if (dateCounter >= 2) {
					return NULL;
				}
				month += (line[i] - 48) * (int)pow(10, dateCounter);
				i++;
				dateCounter++;
			}
			slashCounter++;
			dateCounter = 0;
		}
		else if (slashCounter == 2) {
			while (line[i] != '\0') {
				if (dateCounter >= 4) {
					return NULL;
				}
				year += (line[i] - 48) * (int)pow(10, dateCounter);
				i++;
				dateCounter++;
			}
			slashCounter++;
		}
		i++;
	}
	if (day == 0 || month == 0 || year == 0) {//in case of error
		return NULL;
	}
	//reversing numbers if needed
	if (day >= 10) {
		temp = day % 10;
		day /= 10;
		day += temp * 10;
	}
	if (month >= 10) {
		temp = month % 10;
		month /= 10;
		month += temp * 10;
	}
	if (year >= 1000) {
		temp = year % 10;
		year /= 10;
		temp2 = year % 10;
		year /= 10;
		temp3 = year % 10;
		year /= 10;
		year += temp3 * 10 + temp2 * 100 + temp * 1000;
	}
	MyDate* myDate = new MyDate(day, month, year);
	return myDate;
}

Vaccine* InputFetch::fetchVaccine()
{
	int vaccineID, vaccineType, numberofDosesNeeded, timeBetweenDoses;
	float cost;
	double efficacy;
	int sideEffectType, inactivatedType;
	int storageTemperature, resignTime;
	double discountRate, mililitres;
	char* vaccineName, * producerCompany, * originCountry, *telephoneNumber;

	MyDate* myDate;
	while ((vaccineID = fetchInt("Enter Vaccine ID(x to exit): ")) && (Vaccine::id_location_find(vaccineID) == -1)) {
		cout << "There is a vaccine with ID " << vaccineID;
		if (fetchString("Would you like to add another vaccine? (Y/N):")[0] != 'Y') {
			cout << "\nExited fetching a vaccine!\n\n";
			return NULL;
		}

	}
	if (vaccineID == -900000000 || vaccineID == -999999999) {
		cout << "\nAborted fetching vaccine!\n\n";
		return NULL;
	}
	while ((vaccineType = fetchInt("Select Vaccine Type (1)mRNA,(2)Adenovirus-Based,(3)Inactivated(x to exit): ")) &&
		(vaccineType != 1) && (vaccineType != 2) && (vaccineType != 3)) {
		if (vaccineType == -900000000 || vaccineType == -999999999) {
			cout << "\nAborted fetching vaccine!\n\n";
			return NULL;
		}
		else {
			cout << "\nInvalid input! Please try again.\n\n";
		}
	}

	switch (vaccineType) {
	case 1:
		storageTemperature = fetchInt("Storage Temperature(x to exit): ");
		if (storageTemperature == -900000000 || storageTemperature == -999999999) {
			cout << "\nAborted fetching vaccine!\n\n";
			return NULL;
		}
		resignTime = fetchInt("Time to re-design to combat mutations(x to exit): ");
		if (resignTime == -900000000 || resignTime == -999999999) {
			cout << "\nAborted fetching vaccine!\n\n";
			return NULL;
		}
		break;
	case 2:
		while ((sideEffectType = fetchInt("Side-effect type (1)Headache,(2)Stomachache,(3)Blood Clot(x to exit): ")) &&
			(sideEffectType != 1) && (sideEffectType != 2) && (sideEffectType != 3)) {
			if (sideEffectType == -900000000 || sideEffectType == -999999999) {
				cout << "\nAborted fetching vaccine!\n\n";
				return NULL;
			}
			else {
				cout << "\nInvalid input! Please try again.\n\n";
			}
		}
		cout << "Discount Rate: ";
		cin >> discountRate;
		break;
	case 3:
		while (inactivatedType = fetchInt("Inactivated type (1)SARS-CoV-2,(2)Weakened:(x to exit): ") &&
			inactivatedType != 1 && inactivatedType != 2) {
			if (inactivatedType == -900000000 || inactivatedType == -999999999) {
				cout << "\nAborted fetching vaccine!\n\n";
				return NULL;
			}
			else {
				cout << "\nInvalid input! Please try again.\n\n";
			}
		}
		cout << "Millilitres of vaccine:";
		cin >> mililitres;
		break;
	/*default:
		cout << "\nError code 1!\n\n";
		return NULL;*/
	}
	vaccineName = fetchString("Enter Vaccine Name(@ to exit): ");
	if (getStringSize(vaccineName) == 1 && vaccineName[0] == '@') {
		cout << "\nAborted fetching vaccine!\n\n";
		return NULL;
	}
	producerCompany = fetchString("Enter Producer Company Name(@ to exit):");
	if (getStringSize(producerCompany) == 1 && producerCompany[0] == '@') {
		cout << "\nAborted fetching vaccine!\n\n";
		return NULL;
	}
	originCountry = fetchString("Enter Country of Origin(@ to exit):");
	if (getStringSize(originCountry) == 1 && originCountry[0] == '@') {
		cout << "\nAborted fetching vaccine!\n\n";
		return NULL;
	}
	telephoneNumber = fetchString("Contact Telephone Number(@ to exit):");
	if (getStringSize(telephoneNumber) == 1 && telephoneNumber[0] == '@') {
		cout << "\nAborted fetching vaccine!\n\n";
		return NULL;
	}
	myDate = fetchDate();
	if (myDate == NULL) {
		cout << "\nError getting date!\n\n";
		return NULL;
	}
	numberofDosesNeeded = fetchInt("Number of doses needed(x to exit):");
	if (numberofDosesNeeded == -900000000 || numberofDosesNeeded == -999999999) {
		cout << "\nAborted fetching vaccine!\n\n";
		return NULL;
	}
	timeBetweenDoses = fetchInt("Time between doses(x to exit): ");
	if (timeBetweenDoses == -900000000 || timeBetweenDoses == -999999999) {
		cout << "\nAborted fetching vaccine!\n\n";
		return NULL;
	}
	cout << "Cost: ";
	cin >> cost;

	cout << "Efficacy: ";
	cin >> efficacy;

	if (vaccineType == 1) {
		return (new mRNA(vaccineID, vaccineName, producerCompany, originCountry, telephoneNumber,
			myDate, numberofDosesNeeded, timeBetweenDoses, cost, efficacy, storageTemperature, resignTime));
	}
	else if (vaccineType == 2) {
		AdenovirusBased::SideEffect sideEffect;
		if(sideEffectType == 1){
			sideEffect = AdenovirusBased::SideEffect::Headache;
		}
		else if (sideEffectType == 2) {
			sideEffect = AdenovirusBased::SideEffect::Stomachache;
		}
		else {
			sideEffect = AdenovirusBased::SideEffect::BloodClots;
		}
		return (new AdenovirusBased(vaccineID, vaccineName, producerCompany, originCountry, telephoneNumber,
			myDate, numberofDosesNeeded, timeBetweenDoses, cost, efficacy, sideEffect, discountRate ));
	}
	else {
		Inactivated::InactivatedType inactivatedType2;
		if (inactivatedType == 1) {
			inactivatedType2 = Inactivated::InactivatedType::SarsCOV2;
		}
		else {
			inactivatedType2 = Inactivated::InactivatedType::WeakenedCOV19;
		}
		return (new Inactivated(vaccineID, vaccineName, producerCompany, originCountry, telephoneNumber,
			myDate, numberofDosesNeeded, timeBetweenDoses, cost, efficacy, inactivatedType2, mililitres));
	}




}




