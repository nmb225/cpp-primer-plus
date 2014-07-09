#include <iostream>
#include <cstring>

int main(int argc, char const *argv[])
{
	using namespace std;
	const int ArSize = 20;
	char first[ArSize], last[ArSize];

	cout << "Enter your first name: ";
	cin >> first;
	cout << "Enter your last name: ";
	cin >> last;

	cout << last << ", " << first << "\n";

	return 0;
}