#pragma once
class Inactivated
{
public:
	enum InactivatedType { SarsCOV2, WeakenedCOV19 };
private:
	InactivatedType inactivatedType;
	double mililitres;
public:
	Inactivated();
	InactivatedType getInactivatedType();
	double getMililitres();
	void setInactivatedType(InactivatedType);
	void setMililitres(double);
};

