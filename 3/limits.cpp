#include <iostream>
#include <climits>

int main (int argc, char *argv[])
{
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;

	cout << "int is " << sizeof (int) << " bytes." << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl << endl;

	cout << "Maximum values: " << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl <<endl;

	cout << "Miniumum int value: " << INT_MIN << endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;
	cout << "Unsigned long max value: " << ULONG_MAX << endl;

	return 0;
}