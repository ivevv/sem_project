#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
#include<ctime>

using namespace std;

void eng_menu();
void ru_menu();

void start()
{
	setlocale(0, "");
	cout << "Select language:" << endl << "1. Russian (Русский)" << endl << "2. English" << endl;
	int start;
	cin >> start;
	switch (start)
	{
	case 1:
	{
		ru_menu();
	}
	break;
	case 2:
	{
		eng_menu();
	}
	break;
	default:
	{}
	break;
	}
}

int main()
{
	start();
	return 0;
}
