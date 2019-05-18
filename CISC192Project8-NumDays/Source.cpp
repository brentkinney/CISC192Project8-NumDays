//this class and program converts the given hours from the user into the number of work days
//those hours represent where 8 hours equals one work day

#include <iostream>
#include <vector>
#include <string>
#include <istream>
#include <algorithm>
#include <cstdlib>
#include <numeric>
#include <ctime>
#include <fstream>
#include <array>
#include <iterator>
#include <list>
using namespace std;

class numDays
{
private:
	double convertedDays;



public:

	void convertHours(double hoursGiven)
	{
		convertedDays = hoursGiven / 8;
		double roundedDays = round(convertedDays * 100) / 100;
		cout << "\n" << hoursGiven << " converts to " << roundedDays << " work days." << endl;
	}

};



int main()
{
	char choice = 'y';
	double hoursGiven;

	do
	{
		cout << "Please enter the number of work hours: ";
		cin >> hoursGiven;

		numDays numDay1;
		numDay1.convertHours(hoursGiven);


		//see if the user wants to continue and continue if desired
		cout << "\n\nWould you like to check another phone number? (Y/N): ";
		cin >> choice;
		cout << endl;

	} while (choice == 'y' || choice == 'Y');

	//display author of the program
	cout << "Programmed by Brent Kinney" << endl;
	cout << "Press [Enter] key to end..."; //prompt lets user know
	cin.ignore(256, '\n');
	cin.get();

	return 0;
} 