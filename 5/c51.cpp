#include <iostream>

int main()
{
	using namespace std;
	int start, end;
	int counter = 0;
	cout << "Enter a starting number:\n";
	cin >> start;
	cout << "Enter an ending number:\n";
	cin >> end;

	for (int i = start; i <= end; i++)
		counter += i;
	cout << "The total is: " << counter << endl;
	return 0;
}