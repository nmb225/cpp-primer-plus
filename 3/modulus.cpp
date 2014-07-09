#include <iostream>

int main(int argc, char *argv[])
{
	using namespace std;
	const int lbs_per_stn = 14;
	int lbs;

	cout << "Enter your weight in lbs: ";
	cin >> lbs;
	int stone = lbs / lbs_per_stn; //  whole stone
	int pounds = lbs % lbs_per_stn; // remainder in lbs
	cout << lbs << " pounds are " << stone
	     << " stone, " << pounds << " pound(s).\n";
	return 0;
}