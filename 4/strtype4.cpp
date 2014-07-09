#include <iostream>
#include <string>
#include <cstring>

int main()
{
	using namespace std;
	char charr[20];
	string str;

	cout << "Length of string in char before input:\n";
	cout << strlen(charr) << endl;
	cout << "Length of string in str before input:\n";
	cout << str.size() << endl;

	cout << "Enter a line of text:\n";
	cin.getline(charr, 20); // indicate max length
	cout << "You entered: " << charr << endl;

	cout << "Enter another line of text:\n";
	getline(cin, str); // cin now an argument; no length specified
	cout << "You entered: " << str << endl;

	cout << "Length of string in charr after input:\n";
	cout << strlen(charr) << endl;

	cout << "Length of string in str after input:\n";
	cout << str.size() << endl;

	return 0;
}