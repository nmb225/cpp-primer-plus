#include <iostream>

int main(int argc, char *argv[])
{
	using namespace std;
	int chest = 42;    //decimal
	int waist = 0x42;  // hexadecimal
	int inseam = 042;  // octal

	cout << "Monsieur cuts a striking figure!\n";
	cout << "Chest = " << chest << "\n";
	cout << "Waist = " << waist << "\n";
	cout << "Inseam = " << inseam << "\n";
	return 0;
}