#include <iostream>
#include <ctime>

int main()
{
	using namespace std;
	cout << "Enter a delay time, in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout << "Starting...\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cout << "...Ending\a\n";
	return 0;
}