#include <iostream>

int main()
{
	using namespace std;
	int higgins = 5;
	int * pt = &higgins;

	cout << "Value of higgins = " << higgins
	<< "; Address of higgins = " << &higgins << endl;
	cout << "Value of *pt = " << *pt
	<< "; Value of pt = " << pt << endl;

	return 0;
}