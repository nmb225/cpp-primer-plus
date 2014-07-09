#include <iostream>

int main()
{
	using namespace std;
	int degs, mins, secs;
	cout << "Enter a latitude in degrees, minutes, and seconds:\n";
	cout << "First enter the degrees:\n";
	cin >> degs;
	cout << "Next, enter the minutes of arc:\n";
	cin >> mins;
	cout << "Finally, enter the seconds of arc:\n";
	cin >> secs;

	const int to_secs = mins * 60;
	const float to_degs = float(secs + to_secs) / 3600;

	cout << degs << " degrees, "
	     << mins << " minutes, "
	     << secs << " seconds = "
	     << degs + to_degs << endl;
	return 0;
}