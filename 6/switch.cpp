#include <iostream>
using namespace std;

void showmenu();
void report();
void comfort();

int main()
{	
	showmenu();
	int choice;
	cin >> choice;
	while (choice != 5)
	{
		switch(choice)
		{
			case 1 : cout << "\a\n";
					 break;
			case 2 : report();
					 break;
			case 3 : cout << "The boss was in all day.\n";
					 break;
			case 4 : cout << "Everyone thinks you're the shit.\n";
					 break;
			default: cout << "That's not a choice.\n";
		}
		showmenu();
		cin >> choice;
	}
	cout << "Bye!\n";
	return 0;
}

void showmenu()
{
	cout << "Please enter 1, 2, 3, 4, or 5:\n"
		    "1) Alarm          2) Report\n"
            "3) Alibi          4) Comfort\n"
            "5) Quit\n";
}
void report()
{
	cout << "It's been an excellent week for business.\n"
			"Sales are up 120%. Expenses are down 35%.\n";
}
void comfort()
{
	cout << "Your employees think you are the finest CEO\n"
			"in the industry. The board of directors thinks\n"
			"you are the finest CEO in the industry.\n";
}