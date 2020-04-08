#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
#include<ctime>

using namespace std;

void hangman(string file_name, int size);
void create_custom();
void show_custom();
void add_custom();
void custom_hangman();

void eng_menu();

void rules()
{
	cout << "In this game you need to guess a word letter by letter." << endl;
	cout << "If you guessed a letter right, it is put in all its places in the word." << endl;
	cout << "You have 9 tries to guess a word." << endl;
	cout << "Good luck :)" << endl;
}

void topic()
{
	cout << "Choose a topic:" << endl;
	cout << "1. ensemble stars" // temporary lmao
		<< endl << "2. custom topic" << endl;
	int choice1;
	cin >> choice1;
	cin.clear();
	switch (choice1)
	{
	case 1:
	{
		cout << "Do you know the rules?" << endl << "1. Yes" << endl << "2. No, remind me" << endl;
		int choice2;
		cin >> choice2;
		cin.clear();
		switch (choice2)
		{
		case 1:
		{
			hangman("temporary.txt", 10);
			eng_menu();
		}
		break;
		case 2:
		{
			rules();
			hangman("temporary.txt", 10);
			eng_menu();
		}
		break;
		default:
		{
			cout << "Error! Please, try again!" << endl;
			topic();
		}
		break;
		}
	}
	break;
	case 2:
	{
		cout << "Do you know the rules?" << endl << "1. Yes" << endl << "2. No, remind me" << endl;
		int choice3;
		cin >> choice3;
		cin.clear();
		switch (choice3)
		{
		case 1:
		{
			custom_hangman();
			eng_menu();
		}
		break;
		case 2:
		{
			rules();
			custom_hangman();
			eng_menu();
		}
		break;
		default:
		{
			cout << "Error! Please, try again!" << endl;
			topic();
		}
		break;
		}
	}
	break;
	default:
	{
		cout << "Error! Please, try again!" << endl;
		topic();
	}
	break;
	}
}

void eng_menu()
{
	cout << "Welcome to the Hangman game!" << endl;
	cout << "1. Play" << endl << "2. Custom topic settings" << endl << "3. Exit" << endl;
	int choice1;
	cin >> choice1;
	switch (choice1)
	{
	case 1:
	{
		cout << "Select the game mode:";
		cout << endl << "1. singleplayer" << endl << "2. multiplayer" << endl;
		int choice2;
		cin >> choice2;
		switch (choice2)
		{
		case 1:
		{
			topic();
		}
		break;
		case 2:
		{
			cout << "Maintenance!" << endl;
		}
		break;
		default:
		{
			cout << "Error! Going back to the menu." << endl;
			eng_menu();
		}
		}
	}
	break;
	case 2:
	{
		cout << "1. Create a new custom topic" << endl << "2. Show an existing custom topic" << endl;
		cout << "3. Add words to an existing custom topic" << endl;
		int choice3;
		cin >> choice3;
		cin.clear();
		switch (choice3)
		{
		case 1:
		{
			create_custom();
			eng_menu();
		}
		break;
		case 2:
		{
			show_custom();
			eng_menu();
		}
		break;
		case 3:
		{
			show_custom();
			add_custom();
			eng_menu();
		}
		break;
		default:
		{
			cout << "Error! Going back to the menu." << endl;
			eng_menu(); 
		}
		break;
		}
	}
	break;
	case 3:
	{
		exit(0);
	}
	break;
	default:
	{
		cout << "Error! Going back to the menu." << endl;
		eng_menu();
	}
	break;
	}
}