#include <iostream>
#include <cstring>

using namespace std;
const int letterCount = 20;

int main()
{
	char word[letterCount];
	int wordCount = 0;
	cout << "Enter words (to stop, type the word done.):\n";
	cin >> word;
	while (strcmp(word, "done"))
	{
		cin >> word;
		wordCount++;
	}
	cout << "You entered " << wordCount << " words!\n";
	return 0;
}