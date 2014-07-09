#include <iostream>

const int ArSize = 80;

int main()
{
	using namespace std;
	cout << "Enter a line of text:\n";
	char line[ArSize];
	int spaces = 0;
	cin.get(line, ArSize);
	cout << "Full line:\n"
		 << line << endl;
	cout << "Line up to first period:\n";
	for (int i = 0; line[i] != '\0'; i++)
	{
		cout << line[i];
		if (line[i] == '.')
			break;
		if (line[i] != ' ')
			continue;
		spaces++;
	}
	cout << "\n" << spaces << " spaces\n";
	cout << "Done!\n";
	return 0;
}