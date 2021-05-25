/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only */
#include <iostream>
#include "Vaccine.h"
#include "mRNA.h"
#include "Inactivated.h"
#include "AdenovirusBased.h"


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

    cout << "---------------------------------\n\n";

    mRNA* myMRNA = new mRNA();
    cout << "mRNA:" << myMRNA->getVaccineName() << "  ,mRNA temperature: " << myMRNA->getStorageTemperature() <<"\n";
    mRNA* my_mRNA = new mRNA(10, vaccineName, producerCompany, originCountry, telephoneNumber,
        new MyDate(), 10, 15, 1000, 90.0, -20, 20);
    cout << "mRNA:" << my_mRNA->getVaccineName() << "  ,mRNA temperature: " << my_mRNA->getStorageTemperature() << "\n";
    cout << "---------------------------------\n\n";
    Inactivated::InactivatedType inactivated2 = Inactivated::InactivatedType::WeakenedCOV19;
    Inactivated* inactivated = new Inactivated(21, vaccineName, producerCompany, originCountry, telephoneNumber,
        new MyDate(), 3, 30,
        305.3, 85.0,inactivated2,2.0);
    cout << "Inactivated:" << inactivated->getVaccineName() << "    ,inactivated type: " << inactivated->getInactivatedTypeName() << "\n";
    cout << "---------------------------------\n\n";
    AdenovirusBased* adenovirusBased = new AdenovirusBased();
    cout << "AdenovirusBased(default construct) name:" << adenovirusBased->getVaccineName() << "    ,Adenovirus type: " << adenovirusBased->getSideEffectName() << "\n";
    AdenovirusBased::SideEffect sideEffect = AdenovirusBased::SideEffect::BloodClots;
    AdenovirusBased* adenovirusBased2 = new AdenovirusBased(21, vaccineName, producerCompany, originCountry, telephoneNumber,
        new MyDate(), 3, 30,
        305.3, 85.0, sideEffect, 5.0);
    cout << "AdenovirusBased(custom construct) name:" << adenovirusBased2->getVaccineName() << "    ,Adenovirus type: " << adenovirusBased2->getSideEffectName() << "\n";
    return 0;
}
