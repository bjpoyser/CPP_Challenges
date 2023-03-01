#pragma once
#include <iostream>
#include <stdlib.h>
#include "Challenges.h"

using namespace std;

class Menu
{
public:
	//Displays a menu with the available exercises
	void DisplayMenu(const string &title);

	//Loads the exercise selected | Stops the project | Manage wrong values
	void LoadExercise(const int &option);
};

