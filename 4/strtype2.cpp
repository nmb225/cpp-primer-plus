#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string s1 = "penguin";
	string s2, s3;

	cout << "You can assign one string to another.\n";
	s2 = s1;
	cout << "s1: " << s1 << " s2: " << s2;
	cout << endl;
	cout << "You can assign a C-style string to a string object.\n";
	s2 = "buzzard";
	cout << endl;
	cout << s2;

	cout << "You can concatenate strings\n";
	s3 = s1 + s2;
	cout << s3;
	cout << endl;

	cout << "You can append strings\n";
	s1+=s2;
	cout << s1;
 
	s2 += " for a day";

	cout << s2 << endl;
	return 0;
}