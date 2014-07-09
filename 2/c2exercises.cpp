#include <iostream>
using namespace std;

void printmice(int);
void printrun(int);
void ctof (int);
double astro(int);
void time(int, int);

int main()
{
	// 1
	cout << "Nick" << endl << 24 << endl;

	// 2
	int furlongs;
	cout << "Give me the furlongs: ";
	cin >> furlongs;
	int yards = furlongs * 220;
	cout << furlongs << " furlongs are "
	     << yards << " yards." << endl;

	// 3
	int count;
	cout << "Put in a count...make it two: " << endl;
	cin >> count;

	printmice(count);

	cout << "Do it again: " << endl;
	cout << "Put in a count...make it two: " << endl;
	cin >> count;

	printrun(count);

	// 4
	int celsius; 
	ctof(celsius);

	// 5
	int lightyears;
	astro(lightyears);

	// 6
	int hour, minute;
	time(hour, minute);
	return 0;
}

void printmice (int count){
	int i; 
	for (i = 1; i <= count; i++)
	{
		cout << "Three bline mice" << endl;
	}
}

void printrun (int count){
	int i; 
	for (i = 1; i <= count; i++)
	{
		cout << "See how they run" << endl;
	}
}

void ctof(int celsius){
	cout << "Please enter a celsius value: " << endl;
	cin >> celsius;
	cout << "The equivalent fahrenheit value is " << 1.8 * celsius + 32.0 << endl;
}

double astro(int lightyears){
	cout << "Enter the number of lightyears: " << endl;
	cin >> lightyears;
	cout << lightyears << " light years = " << lightyears * 63240 << " astronomical units." << endl;
	return 0;
}

void time(int hour, int minute){
	cout << "Enter the number of hours: " << endl;
	cin >> hour;
	cout << "Enter the number of minutes: " << endl;
	cin >> minute;
	cout << "Time: " << hour << ":" << minute << endl;
}


