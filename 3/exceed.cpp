#include <iostream>
#define ZERO 0
#include <climits>

int main(int argc, char *argv[])
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;

	cout << "Sam has " << sam << " dollars and Sue has "
	     << sue << " dollars deposited." << endl;
	cout << "Add $1 to each account." << endl << "Now: ";
	
	sam += 1;
	sue += 1;
	
	cout << "Sam has " << sam << " dollars and Sue has "
	     << sue << " dollars deposited.\nPoor Sam." << endl;

	sam = ZERO;
	sue = ZERO;

	cout << "Sam has " << sam << " dollars and Sue has "
		 << sue << " dollars deposited." << endl;
    cout << "Take a dollar from each account." << endl << "Now: ";

    sam -= 1;
    sue -= 1;

    cout << "Sam has " << sam << " dollars and Sue has "
         << sue << " dollars deposited." << endl << "Lucky Sue!" << endl;
	return 0;
}
