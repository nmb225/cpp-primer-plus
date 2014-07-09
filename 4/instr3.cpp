#include <iostream>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter name:\n";
	cin.get(name, ArSize).get(); //read string, newline
	cout << "Enter dessert\n";
	cin.get(dessert, ArSize).get();
	cout << "I have some delicious " << dessert << " for you " << name << ".\n";
	return 0;
}