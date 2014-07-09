#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;
	int wordCount = 0;
	cout << "Enter words (to stop, type the word done.):\n";
	cin >> word;
	while (word != "done")
	{
		cin >> word;
		wordCount++;
	}
	cout << "You entered " << wordCount << " words!\n";
	return 0;
}