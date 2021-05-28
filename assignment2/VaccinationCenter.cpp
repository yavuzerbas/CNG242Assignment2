/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only */
#include "VaccinationCenter.h"

void VaccinationCenter::addBatchList(Batch* head)
{
	Batch* traversal = head;
	while (traversal->getNextBatch() != NULL) {
		traversal = traversal->getNextBatch();
	}
	traversal->setNextBatch(InputFetch::fetchBatch(head));
}
