#include <iostream>
using namespace std;

void start();
void roll();

int main()
{	
	start();
	roll();
	return 0;
}

void start()
{
	cout << "Please enter one of the following choices:\n";
	cout << "c) carnivore     p) pianist\n";
	cout << "t) tree          g) game\n";

	cout << "Please enter a, c, p, t, or g: ";
}

void roll()
{
	char ch;
	cin >> ch;
	switch(ch)
	{
		case 'c' : cout << "Nittany Lion\n";
		           break;
		case 'p' : cout << "Mozart\n";
		           break;
		case 't' : cout << "A maple tree\n";
				   break;
		case 'g' : cout << "Super Smash Bros.\n";
			       break;
		default  : cout << "Please enter a, c, p, t, or g: ";
				   roll();
	}
}