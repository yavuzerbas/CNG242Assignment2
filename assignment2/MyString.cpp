#include "MyString.h"
#include <iostream>
using std::cout;
void MyString::myStrcpy(char* destinationStringAddress, char* sourceStringAdress)
{
	int i = 0;
	if (sourceStringAdress == NULL) {
		cout << "Couldn't copied because sent string is NULL";
		return;
	}
	else {
		while (sourceStringAdress[i] != '\0') {
			char some = sourceStringAdress[i];
			destinationStringAddress[i] = some;
			i++;
		}
		destinationStringAddress[i] = '\0';
	}
	return;
}
/*
void MyString::myStrcpy2(char* destinationStringAddress,const char sourceString[])
{
	int i = 0;
	while (sourceString[i] != '\0') {
		destinationStringAddress[i] = sourceString[i];
		i++;
	}
	destinationStringAddress[i] = '\0';
	if (i == 0) {
		cout << "Couldn't copied because sent string is empty";
	}
	
}
*/
/*not functioning dunno reason*/
int MyString::myLength(char* string)
{
	if (string == NULL) {
		cout << "Sent string is NULL";
		return 0;
	}
	else {
		int i = 0;
		while (string[i] != '\0') {
			i++;
		}
		return i;
	}
}
