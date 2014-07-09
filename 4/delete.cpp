#include <iostream>
#include <cstring>
using namespace std;
char * getname(void);

int main()
{
	char * name; // create pointer but no storage

	name = getname(); // assign address to string to 'name'; NOTE: types match (both ptr to char!)
	cout << name << " at " << (int *) name << "\n"; // 'name' doesn't need * to display text b/c it's the same as name[0];
	delete [] name;

	name = getname();
	cout << name << " at " << (int *) name << "\n";
	delete [] name;
	return 0;
}

char * getname() // return pointer to new string
{
	char temp[80]; // temporary storage
	cout << "Enter last name:\n";
	cin >> temp;
	char * pn = new char[strlen(temp) + 1]; // plus one for null character
	strcpy (pn, temp); // copy string into smaller space

	return pn; // NOTE: temp lost when function ends!
}