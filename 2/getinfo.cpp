#include <iostream>

int main (int argc, char *argv[])
{
	using namespace std;
	unsigned long long carrots; // for an insane amount of carrots

	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here are two more. ";
	carrots += 2;

// concatenate output
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}