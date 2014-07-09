#include <iostream>

int main()
{
	using namespace std;
	cout << "This program may reformat your HD\n"
			"and destroy all your data.\n"
			"Do you wish to continue? <y/n> ";
	char ch;
	cin >> ch;
	if (ch == 'Y' || ch == 'y')
		cout << "You were warned!\a\a\n";
	else if (ch == 'N' || ch == 'n')
		cout << "A wise choice ... bye\n";
	else
		cout << "That wasn't a y or an n, so I guess I'll trash your disk anyway\a\a\n";
	return 0;
}