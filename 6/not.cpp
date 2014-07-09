#include <iostream>
#include <climits>

bool is_int(double);

int main()
{
	using namespace std;
	double num;
	cout << "Yo dude enter an integer: ";
	cin >> num;
	while (!is_int(num))
	{
		cout << "Not in range; please try again: ";
		cin >> num;
	}
	int val = int(num);
	cout << "You've entered the integer " << val << endl;
	return 0;
}

bool is_int(double x)
{
	if (x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}