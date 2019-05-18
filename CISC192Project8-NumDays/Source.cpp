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



public:

};



int main()
{
	char choice = 'y';
	double hoursGiven;

	do
	{
		cout << "Please enter the number of work hours: ";
		cin >> hoursGiven;

	} while (choice == 'y' || choice == 'Y');

	//display author of the program
	cout << "Programmed by Brent Kinney" << endl;
	cout << "Press [Enter] key to end..."; //prompt lets user know
	cin.ignore(256, '\n');
	cin.get();

	return 0;
} 