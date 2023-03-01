#pragma once

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

class Helpers {
public:
	/// <summary>
	/// Splits a string using a separator
	/// </summary>
	/// <param name="pText">Full String</param>
	/// <param name="pSeparator">Character used as separator</param>
	/// <returns>Vector<string> with the text splitted</returns>
	vector<string> static SplitText(const string &pText, const char &pSeparator);
};


