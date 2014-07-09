// Rewrite 4.4 using C++ string class instead of character arrays

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	using namespace std;
	string name, dessert;

	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favorite dessert:\n";
	getline(cin, dessert);

	cout << "I have some delicious " << dessert << " for you, " << name << ".\n";
	return 0;
}