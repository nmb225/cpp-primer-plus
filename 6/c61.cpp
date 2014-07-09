#include <iostream>
#include <cctype>
using namespace std;

int main()
{	
	char ch;
	cin.get(ch);
	while (ch != '@')
	{
		if (ch >= 'a' && ch <= 'z')
			ch = toupper(ch);
		else if (ch >= 'A' && ch <= 'Z')
			ch = tolower(ch);
		cout << ch;
		cin.get(ch);
	}
	cout << endl;

	return 0;
}