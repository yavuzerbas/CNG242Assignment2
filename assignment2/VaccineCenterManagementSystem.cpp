/* Yavuz Erbas ? 2243426
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only */
#include <iostream>
#include "Vaccine.h"
#include "mRNA.h"
#include "Inactivated.h"
#include "AdenovirusBased.h"
#include "InputFetch.h"
#include "VaccinationCenter.h"
using std::cout;
using std::cin;

static char menu() {
    char menuChoice;
    char* line = new char[100];
    cout << "\n1. Create a vaccine\n"
        << "2. Create a batch\n"
        << "3. Search a type of vaccine by ID, provide the total number of items in stock\n"
        << "4. List all types of vaccines and the number of items in stock\n"
        << "5. List total cost of the stock\n"
        << "6. List all types in a given batch\n"
        << "7. List all types of vaccines and the number of them according to their expiry date for a specific batch\n"
        << "8. Exit: ";
    cin >> line;
    cin.ignore();
    //cin.getline(line, 100);
    menuChoice = line[0];
    return menuChoice;
}


int main()
{
    char menuChoice;
    MyDate* myDate;
    Vaccine* vaccineHead = new Vaccine();
    Batch* batchHead = new Batch();
    
    InputFetch* inputFetch =  new InputFetch();
    while ((menuChoice = menu()) && (menuChoice != '8')) {
        switch (menuChoice) {
        case '1':
            inputFetch->addVaccineList(vaccineHead);
            break;
        case '2':
            InputFetch::fetchBatch(batchHead, vaccineHead);
            break;
        case '3':
            cout << "\nIncomplete section!!\n\n";
            break;
        case '4':
            cout << "\nIncomplete section!!\n\n";
            break;
        case '5':
            cout << "\nIncomplete section!!\n\n";
            break;
        case '6':
            cout << "\nIncomplete section!!\n\n";
            break;
        case '7':
            cout << "\nIncomplete section!!\n\n";
            break;

        }
    }
    //char* vaccineName = new char[100];
    //strcpy(vaccineName, "Sputnik");
    //char* producerCompany = new char[100];
    //strcpy(producerCompany, "Russian company");
    //char* originCountry = new char[100];
    //strcpy(originCountry, "Russia");
    //char* telephoneNumber = new char[30];
    //strcpy(telephoneNumber, "0333 333 33 33");
    //
    //Vaccine* vaccine = new Vaccine();
    //Vaccine* vaccine2 = new Vaccine(4,vaccineName, producerCompany, originCountry, telephoneNumber
    //    , new MyDate(), 10, 30, 100, 90);
    //Vaccine* vaccine5 = new Vaccine(3, vaccineName, producerCompany, originCountry, telephoneNumber
    //    , new MyDate(), 10, 30, 100, 90);
    //Vaccine* vaccine3 = new Vaccine();
    //Vaccine* vaccine4 = new Vaccine();
    //
    //cout << "vaccine id: " << vaccine->getVaccineID() <<"\n";
    //cout << vaccine->getVaccineName() << "\n";
    //cout << "vaccine2 id: " << vaccine2->getVaccineID() << "\n";
    //cout << vaccine2->getVaccineName() << "\n";
    //cout << "vaccine3 id: " << vaccine3->getVaccineID() << "\n";
    //cout << vaccine3->getVaccineName() << "\n";
    //cout << "vaccine4 id: " << vaccine4->getVaccineID() << "\n";
    //cout << vaccine4->getVaccineName() << "\n";
    //cout << "vaccine5 id: " << vaccine5->getVaccineID() << "\n";
    //cout << vaccine5->getVaccineName() << "\n";

    //cout << "---------------------------------\n\n";

    //mRNA* myMRNA = new mRNA();
    //cout << "mRNA:" << myMRNA->getVaccineName() << "  ,mRNA temperature: " << myMRNA->getStorageTemperature() <<"\n";
    //mRNA* my_mRNA = new mRNA(10, vaccineName, producerCompany, originCountry, telephoneNumber,
    //    new MyDate(), 10, 15, 1000, 90.0, -20, 20);
    //cout << "mRNA:" << my_mRNA->getVaccineName() << "  ,mRNA temperature: " << my_mRNA->getStorageTemperature() << "\n";
    //cout << "---------------------------------\n\n";
    //Inactivated::InactivatedType inactivated2 = Inactivated::InactivatedType::WeakenedCOV19;
    //Inactivated* inactivated = new Inactivated(21, vaccineName, producerCompany, originCountry, telephoneNumber,
    //    new MyDate(), 3, 30,
    //    305.3, 85.0,inactivated2,2.0);
    //cout << "Inactivated:" << inactivated->getVaccineName() << "    ,inactivated type: " << inactivated->getInactivatedTypeName() << "\n";
    //cout << "---------------------------------\n\n";
    //AdenovirusBased* adenovirusBased = new AdenovirusBased();
    //cout << "AdenovirusBased(default construct) name:" << adenovirusBased->getVaccineName() << "    ,Adenovirus type: " << adenovirusBased->getSideEffectName() << "\n";
    //AdenovirusBased::SideEffect sideEffect = AdenovirusBased::SideEffect::BloodClots;
    //AdenovirusBased* adenovirusBased2 = new AdenovirusBased(21, vaccineName, producerCompany, originCountry, telephoneNumber,
    //    new MyDate(), 3, 30,
    //    305.3, 85.0, sideEffect, 5.0);
    //cout << "AdenovirusBased(custom construct) name:" << adenovirusBased2->getVaccineName() << "    ,Adenovirus type: " << adenovirusBased2->getSideEffectName() << "\n";
    return 0;
}
