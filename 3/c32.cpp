#include <iostream>

int main()
{	
	using namespace std;
	int feet, inches, pounds;
	cout << "How many feet tall are you?\n";
	cin >> feet;
	cout << "How many more inches tall are you?\n";
	cin >> inches;
	cout << "How much, in pounds, do you weigh?\n";
	cin >> pounds;
	
	const int to_inches = feet * 12;
	const float to_kilos = pounds / 2.2;
	const float to_metric = 0.0254 * to_inches;

	float bmi = to_kilos / (to_metric * to_metric);
	cout << "Your BMI is " << bmi << endl;

	return 0;
}
