#include "Helpers.h"

vector<string> Helpers::SplitText(const string &text, const char  &separator) {
	vector<string> result;
	stringstream stream(text);
	string tempString;

	while(getline(stream, tempString, separator))
		result.push_back(tempString);

	return result;
}