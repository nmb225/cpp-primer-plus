#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	int sales[12];
	int total = 0;
	for (int i = 0; i < 12; i++)
	{
		cout << "Enter the number of sales for " << months[i] << ":\n";
		cin >> sales[i];
		total += sales[i];
	}

	cout << "Total sales for the year is " << total << ".\n";
	return 0;
}