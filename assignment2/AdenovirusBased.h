#pragma once
class AdenovirusBased
{
public:
	enum SideEffect { None, BloodClots, Headache, Stomachache };
	AdenovirusBased();
	SideEffect getSideEffect();
	double getDiscountRate();
	void setSideEffect(SideEffect);
	void setDiscountRate(double);
private:
	SideEffect sideEffect;
	double discountRate;
};

