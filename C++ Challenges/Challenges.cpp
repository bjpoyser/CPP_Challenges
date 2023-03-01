#include "Challenges.h"

#pragma region BizzBuzz
void Challenges::BizzBuzz()
{
	cout << "************ BizzBuzz ************" << endl << endl;

	//Prompt for n
	int n;
	cout << "Enter a number greater than 0: ";
	cin >> n;

	//Recursion in case n <= 0 to prompt again for the number
	if (n <= 0) BizzBuzz();

	cout << endl << "Result:" << endl;
	for (int i = 1; i <= n; i++)
	{
		if (i % 3 != 0 && i % 5 != 0) {
			cout << i << " ";
		}
		else
		{
			if (i % 3 == 0) cout << "Bizz";
			if (i % 5 == 0) cout << "Buzz";
			cout << " ";
		}
	}

	cout << endl << endl;
	system("PAUSE");
	system("CLS");
}
#pragma endregion

#pragma region BizzBuzzPlus
void Challenges::BizzBuzzPlus()
{
	cout << "************ BizzBuzz Plus ************" << endl << endl;

	//Prompt for the BizzBuzzPlus Numbers
	int bizz, buzz, n;

	cout << "Enter a number greater than 0 for Bizz: ";
	cin >> bizz;
	cout << "Enter a number greater than 0 for Buzz: ";
	cin >> buzz;
	cout << "Enter a number greater than 0 for n: ";
	cin >> n;

	//Recursion in case bizz <= 0 || buzz <= 0 || n <= 0 to prompt again for the number
	if (bizz <= 0 || buzz <= 0 || n <= 0) BizzBuzzPlus();

	cout << endl << "Result:" << endl;
	for (int i = 1; i <= n; i++)
	{
		bool hasBizz = CheckBizzBuzzPlusNumber(bizz, i);
		bool hasBuzz = CheckBizzBuzzPlusNumber(buzz, i);

		if (!hasBizz && !hasBuzz) cout << i << " ";
		else
		{
			if (hasBizz) cout << "Bizz";
			if (hasBuzz) cout << "Buzz";
			cout << " ";
		}
	}

	cout << endl << endl;
	system("PAUSE");
	system("CLS");
}

bool Challenges::CheckBizzBuzzPlusNumber(const int& bbNumber, const int& n)
{
	//Convert numbers to strings
	string bbNumberString = to_string(bbNumber);
	string nString = to_string(n);

	//Check if n contains the BizzBuzz Number
	bool containsBB = strstr(nString.c_str(), bbNumberString.c_str());

	//Check if n is product of BizzBuzz Number
	bool isProductOfBB = n % bbNumber == 0;

	return containsBB || isProductOfBB;
}
#pragma endregion

