#include <iostream>

int main()
{
	using namespace std;
	int a, b;
	cout << "Enter two numbers for comparison:";
	cin >> a >> b;
	cout << "The larger of " << a << " and " << b;
	int c = a > b ? a : b;
	cout << " is " << c << endl;
	return 0;
}