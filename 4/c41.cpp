#include <iostream>

int main()
{
	using namespace std;
	char first[10];
	char last[4];
	char grade;
	unsigned int age;

	cout << "What is your first name? ";
	cin.getline(first, 10); // define string
	cout << "What is your last name? ";
	cin >> last;
	cout << "\nWhat letter grade do you deserve? ";
	cin >> grade;
	cout << "\nWhat is your age? ";
	cin >> age;

	cout << "\nName: " << last << ", " << first << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;
	return 0;
}
