#include <iostream>
#include "Vaccine.h"
#include "MyString.h"
#include "assignment2.h"

using std::cout;
using std::cin;

int main()
{
    char* vaccineName = new char[100];
    strcpy(vaccineName, "Sputnik");
    char* producerCompany = new char[100];
    strcpy(producerCompany, "Russian company");
    char* originCountry = new char[100];
    strcpy(originCountry, "Russia");
    char* telephoneNumber = new char[100];
    strcpy(telephoneNumber, "0533 333 33 33");
    
    Vaccine* vaccine = new Vaccine();
    Vaccine* vaccine2 = new Vaccine(4,vaccineName, producerCompany, originCountry, telephoneNumber
        , new MyDate(), 10, 30, 100, 90);
    Vaccine* vaccine5 = new Vaccine(3, vaccineName, producerCompany, originCountry, telephoneNumber
        , new MyDate(), 10, 30, 100, 90);
    Vaccine* vaccine3 = new Vaccine();
    Vaccine* vaccine4 = new Vaccine();
    
    cout << "vaccine id: " << vaccine->getVaccineID() <<"\n";
    cout << vaccine->getVaccineName() << "\n";
    cout << "vaccine2 id: " << vaccine2->getVaccineID() << "\n";
    cout << vaccine2->getVaccineName() << "\n";
    cout << "vaccine3 id: " << vaccine3->getVaccineID() << "\n";
    cout << vaccine3->getVaccineName() << "\n";
    cout << "vaccine4 id: " << vaccine4->getVaccineID() << "\n";
    cout << vaccine4->getVaccineName() << "\n";
    cout << "vaccine5 id: " << vaccine5->getVaccineID() << "\n";
    cout << vaccine5->getVaccineName() << "\n";
    /*
    char* name = new char[20];
    cin >> name;
    char* name2 = new char[20];
    MyString::myStrcpy(name2, name);
    int x = 3;
    cout << "myStrcpy result:" << name2;
    //cout << "\nname length: " << MyString::myLength(name);
    //cout << "\nname2 length: " << MyString::myLength(name2);
    
    char* name = new char[100];
    strcpy(name, "not provided");
    cout << name;
    */

    return 0;
}
