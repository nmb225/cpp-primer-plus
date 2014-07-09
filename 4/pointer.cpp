#include <iostream>

int main()
{
	using namespace std;
	int updates = 6;
	int * p_updates;

	p_updates = &updates;

	// express value in two ways
	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	// express address two ways
	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	// use pointer to change values
	*p_updates += 1;
	cout << "Now updates = " << updates << endl;
	return 0;
}