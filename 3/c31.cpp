#include <iostream>

int main()
{
	using namespace std;
	const int foot = 12;
	int inches;
	cout << "What's your height in inches? __\b\b";
	cin >> inches;
	int feet = inches/foot;
	int remain = inches % foot;
	cout << "You are " << feet << " feet, " << remain << " inche(s).\n";
	return 0;
}