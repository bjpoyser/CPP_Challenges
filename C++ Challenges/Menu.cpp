#include "Menu.h"

void Menu::DisplayMenu(const string &title)
{
	int option;

	cout << title << endl << endl;

	cout << "1) BizzBuzz" << endl;
	cout << "2) BizzBuzz Plus" << endl;
	cout << "3) Reverse Text" << endl;
	cout << "4) Spheres Intersecting" << endl;
	cout << "5) Pointers|Memory Management" << endl;
	cout << "6) Dynamic Arrays" << endl;
	cout << "7) Array of Numbers" << endl;
	cout << "0) Exit" << endl << endl;

	cout << "Select an option: "; 
	cin >> option;

	LoadExercise(option);
}

//Uses recursion to go back to the main menu until the user inputs 0
void Menu::LoadExercise(const int &option) 
{
	Challenges challenges = Challenges();
	system("CLS"); //Clear the console

	switch (option)
	{
		case 0: cout << "Bye!" << endl << endl; exit(0); break;
		case 1: challenges.BizzBuzz(); break;
		case 2: challenges.BizzBuzzPlus(); break;
		case 3: challenges.ReverseWord(); break;
		case 4: challenges.SpheresIntersection(); break;
		case 5: challenges.PointersManagement(); break;
		case 6: challenges.DynamicArrays(); break;
		case 7: challenges.ArrayOfNumbers(); break;
		default: 
			system("CLS"); 
			cout << endl << endl; 
			DisplayMenu("The option selected doesn't exits, try again."); 
			break;
	}

	DisplayMenu("************ WELCOME ************");
}