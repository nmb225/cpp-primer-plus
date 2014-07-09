#include <iostream>
#include <string>

using namespace std;

int main()
{
	struct cars 
	{
		string make;
		int year;
	};

	int n;
	cout << "How many cars in your collection?\n";
	cin >> n;
	cars * collection = new cars[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Car #" << i + 1 << ":\n";
		cout << "Please enter the make: ";
		cin.get();
		getline(cin, collection[i].make);
		cout << "Please enter the year made: ";
		cin >> collection[i].year;
		cout << endl;
	}

	cout << "\aHere is your collection:\n";
	for (int j = 0; j <= n; j++)
	{
		cout << collection[j].year << " " << collection[j].make << endl;
	}

	delete [] collection;
	return 0;
}