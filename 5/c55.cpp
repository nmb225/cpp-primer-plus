#include <iostream>
#include <string>
using namespace std;

int main()
{
	const string months[12] =
	{
		"Jan", "Feb", "Mar", "Apr", "May", "Jun",
		"Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
	};
	
	const string years[3] = {"Year 1", "Year 2", "Year 3"};

int three_years[3][12];
int annual[3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cout << "Enter the number of sales for " << months[j] << ", " << years[i] << ": ";
			cin >> three_years[i][j];
			annual[i] += three_years[i][j];
			cout << endl;
		}
		
	}

	cout << "The total for year one was: " << annual[0] << endl;
	cout << "The total for year two was: " << annual[1] << endl;
	cout << "The total for year three was: " << annual[2] << endl;

	cout << "Three year sales = " << annual[0] + annual[1] + annual[2] << endl;
	return 0;
}