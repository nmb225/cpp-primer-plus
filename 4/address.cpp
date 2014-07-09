#include <iostream>

int main()
{
	using namespace std;
	int donuts = 6;
	double cups = 4.5;

	cout << "donuts value = " << donuts;
	cout << " and donuts addresss = " << &donuts << endl;
	// NOTE: You may need to use unsigned (&donuts)
	// and unsigned(&cups)

	cout << "cups value = " << cups;
	cout << " and cups address = " << &cups << endl;
	return 0;
}