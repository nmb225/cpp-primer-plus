#include <iostream>

int main()
{
	using namespace std;
	long secs;
	cout << "Enter the number of seconds:\n";
	cin >> secs;
	long s = secs; // Ensure maintenance of initial secs input.
	
	const long days = 86400;
	const int hours = 3600;
	const int mins = 60;
	
	int d = s/days;
	s %= 86400;
	int h = s/hours;
	s %= 3600;
	int m = s/mins;
	s %= 60;

	cout << secs << "seconds = " 
	     << d << " days, "
	     << h << " hours, "
	     << m << " minutes, "
	     << s << " seconds.";

	return 0;
}