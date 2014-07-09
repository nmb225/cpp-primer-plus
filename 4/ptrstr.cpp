#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	char animal[20] = "bear";
	const char * bird = "wren";
	char * ps; //uninit
	cout << animal << " and ";
	cout << bird << "\n";
	// cout << ps << "/n"; may display garbage who knows

	cout << "Enter a type of animal: ";
	cin >> animal;
	// cin >> ps; too horrible a blunder to try; ps doesn't point to allocated space

	ps = animal; //set ps to point to string
	cout << ps << "s!\n"; //ok, same as using animal
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int *)  animal << endl;
	cout << ps << " at " << (int *) ps << endl;

	ps = new char(strlen(animal) + 1); //get new storage
	strcpy(ps, animal); //copy string to new storage
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;
	return 0;
}	