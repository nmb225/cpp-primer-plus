#include <iostream>
using namespace std;

void simon(int);

int main(int argc, char *argv[])
{
	simon(3);
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
	return 0;
}

void simon(int n) // define the simon func
{
	cout << "Simon says touch your toes "
	<< n << " times."
	<< endl;
	//void funcs don't need to return anything
}