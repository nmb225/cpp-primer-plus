#include <iostream>

int main()
{
	using namespace std;
	const float lpg = 3.875; // liters per gallon
	const float mpk = 0.6214; // miles per kilometer

	int l, k;
	float g, m;

	cout << "How many liters of gas did you use?\n";
	cin >> l;
	cout << "How many kilometers did you drive?\n";
	cin >> k;

	// liters to gallons 3.875 liters = 1 gallon
	g = l/lpg;

	// kilometers to miles 1 k = .6214 mi
	m = k * mpk;

	cout << "You drove " << m << " miles on " << g << " gallons.\n"; 

	return 0;
}
