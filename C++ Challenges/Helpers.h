#pragma once

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cstring>
#include <regex>
#include <algorithm>
#include <cctype>


using namespace std;

class Helpers {
public:
	/// <summary>
	/// Splits a string using a separator
	/// </summary>
	/// <param name="pText">Reference to the text</param>
	/// <param name="pSeparator">Reference to the Character used as separator</param>
	/// <param name="normalize">Wheter you want to normalize the text or not</param>
	/// <returns>Text Splitted</returns>
	vector<string> static SplitText(const string &pText, const char &pSeparator, bool normalize);
	/// <summary>
	/// Normalize a word, lowercase and removing all extra symbols
	/// </summary>
	/// <param name="word">Pointer to the Word to Normalize</param>
	void static NormalizeWord(string * word);
};


