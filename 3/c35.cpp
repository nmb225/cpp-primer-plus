#include <iostream>

int main()
{
	using namespace std;

	float miles, gallons;

	cout << "How many miles have you driven?\n";
	cin >> miles;
	cout << "How many gallons of gas have you used?\n";
	cin >> gallons;

	cout << "You're getting " << miles/gallons << " mpg."; 
	return 0;
}