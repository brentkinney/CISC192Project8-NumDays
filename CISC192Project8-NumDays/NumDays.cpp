#include "NumDays.h"
#include <iostream>

using namespace std;



NumDays::NumDays()
{
}


NumDays::~NumDays()
{
}


NumDays NumDays::operator+ (const NumDays& right)
{
	NumDays n;
	n.setConvertedDays(convertedDays + right.convertedDays);
	return n;
}

NumDays NumDays::operator- (const NumDays & right)
{
	NumDays n;
	n.setConvertedDays(convertedDays - right.convertedDays);
	return n;
}

NumDays& NumDays::operator++ ()
{
	++workHours;
	return *this;
}

NumDays NumDays::operator++ (int unused)
{
	NumDays temp = *this;
	++workHours;
	temp.convertHours(workHours);
	return temp;
}


NumDays& NumDays::operator-- ()
{
	--workHours;
	return *this;
}

NumDays NumDays::operator-- (int unused)
{
	NumDays temp = *this;
	--workHours;
	temp.convertHours(workHours);
	return temp;
}
