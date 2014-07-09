#include <iostream>
struct inflatable
{
	char name [20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable *ps = new inflatable; // allot memory for structure
	cout << "Enter name of inflatable item:\n";
	cin.get(ps->name, 20); // method 1 for member access
	cout << "Enter volume in cubic feet:\n";
	cin >> (*ps).volume; // method 2 for member access
	cout << "Enter price: $\n";
	cin >> ps->price;

	cout << "Name: " << (*ps).name << endl; //method 2
	cout << "Volume: " << ps->volume << " cubic feet\n"; //method 1
	cout << "Price: $" << ps->price << endl; //method 1
	delete ps; // don't forget to free the memory used by the structure
	return 0;
}