#include <iostream>
#include <string> // make string class available
#include <cstring> // C-style string library

int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	// assignment for string operators and char arrays
	str1 = str2;
	strcpy(charr1, charr2);

	// appending for string operators and char arrays
	str1 += " paste";
	strcat(charr1, " juice");

	// finding the length of a string object and a C-style string
	int len1 = str1.size();
	int len2 = strlen(charr1);
	cout << str1 << endl;
	cout << str2 << endl;
	cout << len1 << endl;
	cout << len2 << endl;
	return 0;
}