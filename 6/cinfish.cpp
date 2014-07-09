#include <iostream>

const int Max = 5;

int main()
{
	using namespace std;
	double fish[Max];
	cout << "Enter weights of fish, up to five; Press q to quit: ";
	int i = 0;
	cout << "Fish #1: ";
	while (i < Max && cin >> fish[i])
	{
		if (++i < Max)
			cout << "Fish #" << i+1 << ": "; 
	}

	double total = 0.0;
	for (int j = 0; j < i; j++)
	{
		total += fish[j];
	}

	if (i == 0)
		cout << "No fish.";
	else 
		cout << total/i << " = average weight of " << i << " fish.\n";
	cout << "Done.\n";
	return 0;
}