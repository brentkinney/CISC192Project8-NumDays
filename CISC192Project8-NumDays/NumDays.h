#pragma once
#include <iostream>
class NumDays
{

private:
	double convertedDays;
	double workHours;
	double rawDays;
public:
	NumDays();
	~NumDays();
	void convertHours(double hoursGiven)
	{
		rawDays = hoursGiven / 8;
		workHours = hoursGiven;
		convertedDays = round(rawDays * 100) / 100;
	}

	void setConvertedDays(double days)
	{
		convertedDays = days;
	}

	double getConvertedDays()
	{
		return convertedDays;
	}

	double getWorkHours()
	{
		return workHours;
	}

	NumDays operator+ (const NumDays& right);
	NumDays operator- (const NumDays& right);
	NumDays& operator++ ();
	NumDays operator++ (int unused);
	NumDays& operator-- ();
	NumDays operator-- (int unused);

};

