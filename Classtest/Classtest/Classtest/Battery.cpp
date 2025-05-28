#include "battery.h"

using namespace std;

void Battery::plusePercent() {
	setPercent(7);
}

void Battery::minusPercent()
{
	setPercent(-5);
}

void Battery::setPercent(int num)
{
	this->percent += num;
	if (this->percent > 100) { this->percent = 100; }
	else if (this->percent < 0) { this->percent = 0; }
}

int Battery::getPercent()
{
	return percent;
}