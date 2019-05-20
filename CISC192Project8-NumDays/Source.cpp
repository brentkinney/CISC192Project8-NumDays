//this class and program converts the given hours from the user into the number of work days
//those hours represent a work day where 8 hours equals 1 day.

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
#include "NumDays.h"
using namespace std;





int main()
{
	char choice = 'y';
	double hoursGiven;
	double hoursGiven2;


	do
	{
		cout << "Please enter the number of work hours: ";
		while (1) {
			if (cin >> hoursGiven) {
				if (hoursGiven <= 0)
				{
					cout << "Incorrect entry. Value must be greater than 0. \n" << endl;
					cin.clear();
					while (cin.get() != '\n');
				}
				else
				{
					break;
				}
			}
			else {
				// not a valid number
				cout << "Invalid Input! Please input a numerical value. \n" << endl;
				cin.clear();
				while (cin.get() != '\n'); // empty loop
			}
		}



		NumDays numDay1;
		numDay1.convertHours(hoursGiven);
		cout << "One: " << numDay1.getConvertedDays() << " days.\n" << endl;

		cout << "Please enter another number of work hours: ";
		while (1) {
			if (cin >> hoursGiven2) {
				// valid number
				if (hoursGiven2 <= 0)
				{
					cout << "Incorrect entry. Value must be greater than 0. \n\n" << endl;
					cin.clear();
					while (cin.get() != '\n');
				}
				else
				{
					break;
				}

			}
			else {
				// not a valid number
				cout << "Invalid Input! Please input a numerical value." << endl;
				cin.clear();
				while (cin.get() != '\n'); // empty loop
			}
		}


		NumDays numDay2;
		numDay2.convertHours(hoursGiven2);
		cout << "Two: " << numDay2.getConvertedDays() << " days.\n" << endl;

		NumDays addition = numDay1 + numDay2;
		cout << "Addition: One + Two: " << addition.getConvertedDays() << " days." << endl;
		NumDays subtraction = numDay1 - numDay2;
		cout << "Subtraction: One - Two: " << subtraction.getConvertedDays() << " days." << endl;
		cout << "One++: " << numDay1.getConvertedDays() << " days." << endl;
		cout << "++One: " << numDay1++.getConvertedDays() << " days." << endl;
		cout << "Two--: " << numDay2.getConvertedDays() << " days." << endl;
		cout << "--Two: " << numDay2--.getConvertedDays() << " days." << endl;


		//see if the user wants to continue and continue if desired
		cout << "\n\nWould you like to check another set of work hours? (Y/N): ";
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