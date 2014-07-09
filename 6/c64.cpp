#include <iostream>
using namespace std;
const int strsize = 20;
const int size = 5;

struct bop {
	char fullname[strsize]; // real name
	char title[strsize];    // job title
	char bopname[strsize];  // secret BOP name
	int preference;         // 0 = full name, 1 = title, 2 = bopname
};

void choice(char input, bop bb[], int size);
void choicePref(bop bb[], int choiceloop);

int main()
{	
	bop bb[5] = {
		{"Nicholas", "Master", "Michael Jay", 1},
		{"Cameron", "Mistress", "Lizzy Lilac", 2},
		{"Jack", "Bitch", "Ass Key Royal", 1},
		{"Doug", "Stoner", "Douglas Potts", 2},
		{"Andy", "Coyote", "Botwinning", 0}
	};

	cout << "Benevolent order of programmers report...\n";
	cout << "a. display by name" << "\t" << "b. display by title\n";
	cout << "c. display by bopname" << "\t" << "d. display by preference\n";
	cout << "q. quit\n";

	cout << "Enter your choice: ";
	char ch;
	cin >> ch;

	while (ch != 'q')
	{
		choice(ch, bb, size);
		cout << "\nNext choice:\n";
		cin >> ch;
	}

	cout << "Bye!\n";
	return 0;
}

void choice(char input, bop bb[], int size)
{
	for (int i = 0; i < size; i++)
	{
		switch(input)
		{
			case 'a' : cout << bb[i].fullname << endl;
				break;
			case 'b' : cout << bb[i].title << endl;
				break;
			case 'c' : cout << bb[i].bopname << endl;
				break;
			case 'd' : choicePref(bb, i);
				break;
		}
	}
}

void choicePref(bop bb[], int choiceloop) // FILL IN
{
	int pref = bb[choiceloop].preference;
	switch(pref)
	{
		case 0 : cout << bb[choiceloop].fullname << endl;
			break;
		case 1 : cout << bb[choiceloop].title << endl;
			break;
		case 2 : cout << bb[choiceloop].bopname << endl;
			break;
	}
}








