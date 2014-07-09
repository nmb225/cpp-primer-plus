#include <iostream>

using namespace std;

int main()
{	
	cout << "What year was your house built in?\n";
	int year;
	cin >> year;
	cout << "What is its street address?\n";
	cin.get();
	char address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Addresss: " << address << endl;
	cout << "Done!\n";
	return 0; 
}