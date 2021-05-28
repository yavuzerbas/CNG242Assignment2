/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only */
#include "VaccinationCenter.h"

VaccinationCenter::VaccinationCenter()
{
}

void VaccinationCenter::addBatchList(Batch* batchHead,Vaccine* vaccineHead,int batchID)
{
	
	//Batch* traversal = batchHead;
	//while (traversal->getNextBatch() != NULL) {
	//	traversal = traversal->getNextBatch();
	//}
	//traversal->setNextBatch(InputFetch::fetchBatch(batchHead,vaccineHead));
	//if (traversal->getNextBatch() == NULL) {//aborted while fetching Batch ID
	//	return;
	//}
	//traversal = traversal->getNextBatch();
	
	int key = 1,vaccineID, amount;
	int firstTimeKey = 1;
	Batch* newBatch = new Batch(batchID, batchHead);
	do {
		vaccineID = InputFetch::fetchInt("Add a vaccine with ID(x to exit)");
		if (vaccineID == -90000 || vaccineID == -99999) {
			cout << "\nAborted fetching vaccine ID!\n\n";
			return;
		}
		else {
			if (Vaccine::id_location_find(vaccineID) != -1) {
				amount = InputFetch::fetchInt("Amount(x to exit):");
				if (amount == -90000 || amount == -99999) {
					cout << "\nAborted fetching vaccine amount!\n\n";
					return;
				}
				MyDate* myDate = InputFetch::fetchDate();
				if (myDate == NULL) {
					return;
				}
				Vaccine* vaccine = Vaccine::findVaccineWithID(vaccineHead,vaccineID);
				if (vaccine == NULL) {
					cout << "\nUnexpected error 2\n\n";
					return;
				}
				
				VaccineInBatch* newVaccineInBatch = new VaccineInBatch(vaccine, amount, myDate);
				newBatch->addVaccineInBatchList(newVaccineInBatch);
				if (newVaccineInBatch != NULL) {
					//Batch* traversal = batchHead;
					//while (traversal->getNextBatch() != NULL) {
					//	traversal = traversal->getNextBatch();
					//}
					//if (firstTimeKey == 1) {
					//	//newBatch = new Batch(batchID, batchHead);
					//	traversal->setVaccineInBatch(newVaccineInBatch);
					//	firstTimeKey = 0;
					//}
					
					
					/*VaccineInBatch* vaccineInBatchTraversal = newBatch->getVaccineInBatch();
					traversal->setVaccineInBatch(newVaccineInBatch);*/
					cout << amount << "Vials of " << vaccine->getVaccineName() << " is added to the batch!\n";
					char* input = InputFetch::fetchString("Would you like to add anouther vaccine?(Y/N): ");
					if (input[0] == 'Y' || input[0] == 'y') {
						key = 1;
					}
					else {
						key = 0;
					}
				}
				else {
					cout << "\nEmpty vaccine in batch!!\n\n";
					return;
				}
				
			}
			else {
				cout << "There isn't any vaccine with ID:" << vaccineID << "!Please enter a valid ID!\n\n";
			}
		}

	} while (key);
	
}