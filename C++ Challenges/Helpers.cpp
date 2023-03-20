#include "Helpers.h"


vector<string> Helpers::SplitText(const string &text, const char  &separator, bool normalize) {
	vector<string> result;
	stringstream stream(text);
	string tempString;

	while (getline(stream, tempString, separator)) {
		if (normalize) NormalizeWord(&tempString);
		result.push_back(tempString);
	}
		
	return result;
}

void Helpers::NormalizeWord(string * word) 
{
	string text = *word;
	for (int i = 0, len = text.size(); i < len; i++)
	{
		// check whether parsing character is punctuation or not
		if (ispunct(text[i]))
		{
			text.erase(i--, 1);
			len = text.size();
		}
	}
	*word = text;

	transform(word->begin(), word->end(), word->begin(), ::tolower);
}