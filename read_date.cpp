#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	int CurrentDate, Day, Month, Year;

	cout << "Please enter a date in DDMMYYYY format (Example: 15071997): ";
	cin >> CurrentDate;

	Day = (CurrentDate / 1000000);
	Month = (CurrentDate / 10000) % 100;
	Year = ( CurrentDate % 10000 );

	if ( CurrentDate < 0 || Day < 0 || Month < 0 || Year < 0 )
	{
		cout << "Please enter positive numbers" << endl;
		return 0;
	}


	cout << "The original DDMMYYYY date of " << CurrentDate << " has been converted to MM / DD / YY format below" << std::endl;
	cout << Day << " / " << Month << " / " << Year << endl;
	return 0;
}
