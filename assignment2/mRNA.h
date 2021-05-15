#pragma once
class mRNA
{
private:
	int storageTemperature;
	int redesignTime;
public:
	mRNA();
	mRNA(int, int);
	int getStorageTemperature();
	int getRedesignTime();
	void setStorageTemperature(int);
	void setRedesignTime(int);
};

