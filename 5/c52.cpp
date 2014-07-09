#include <iostream>

int main()
{
	using namespace std;
	int i;
	int counter = 0;
	while (i != 0)
	{
		cout << "\nType numbers to sum. Enter \'0\' to quit.\n";
		cin >> i;
		counter += i;
		cout << counter;
	}
	return 0;
}