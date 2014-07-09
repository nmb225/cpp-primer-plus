#include <iostream>
using namespace std;

const int ArSize = 10;

int main()
{
	double num[ArSize];
	double tmp;
	cout << "Enter 10 numbers:\n";

	double avg = 0.0;
	int i;
	for (i=0; i < ArSize && cin >> tmp; i++)
	{
		num[i] = tmp;
		avg += tmp;
	}
	avg /= i;
	int above = 0;
	for (int j = 0; j < i; j++)
	{
		if (num[j] > avg)
			above++;
	}
	cout << "The average of your numbers is " << avg
	     << " and the number of numbers greater than the average is "
	     << above << "." << endl;
	return 0;
}