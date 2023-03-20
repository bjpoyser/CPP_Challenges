#include "Challenges.h"
#include "Box.h"


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

#pragma region ReverseText
void Challenges::ReverseWord() {
	cout << "************ Reverse Word ************" << endl << endl;
	
	//Get Text
	string text;
	cout << "Insert a text: ";
	cin >> text;

	//Reverse Text
	const size_t stringLength = strlen(text.c_str());
	for (size_t i = 0; i < stringLength / 2; i++)
	{
		 size_t j = stringLength - i - 1;
		 if (j >= 0) swap(text[i], text[j]);
	}
	
	cout << "Text Reversed: " << text << endl << endl;
	system("PAUSE");
	system("CLS");
}
#pragma endregion

#pragma region SpheresIntersecting
void Challenges::SpheresIntersection() {
	cout << "************ Spheres Intersection ************" << endl << endl;

	//Get Spheres Information
	cout << "____ First Sphere ____" << endl << endl;
	Sphere firstSphere = CreateSphere();
	cout << "____ Second Sphere ____" << endl << endl;
	Sphere secondSphere = CreateSphere();

	//Get SUM of both radius
	double radSum = pow(firstSphere.radius + secondSphere.radius, 2);
	//Get Distance (not using square root to make it memory friendly)
	double distance = pow(secondSphere.center[0] - firstSphere.center[0], 2) + pow(secondSphere.center[1] - firstSphere.center[1], 2);

	//Check if they are intersecting
	if (distance < radSum) cout << "Spheres are intersecting" << endl << endl;
	else cout << "Spheres are not intersecting" << endl << endl;

	system("PAUSE");
	system("CLS");
}

Sphere Challenges::CreateSphere() {
	string centerString;
	double radius;

	cout << "Introduce the coordinates (2D), separating the x and y values with a comma (e.g: x,y): ";
	cin >> centerString;
	cout << "Introduce the radius: ";
	cin >> radius;

	vector<string> stringVector = Helpers::SplitText(centerString, ',', false);
	double center[] = { stof(stringVector[0]), stof(stringVector[1]) };

	return Sphere(center, radius);
}
#pragma endregion

#pragma region PointersMemoryManagement
void Challenges::PointersManagement() 
{
	int a, b;
	int* pa = &a, * pb = &b;

	cout << "Enter a value for A: ";
	scanf_s("%d", &a);
	cout << "Enter a value for B: ";
	scanf_s("%d", &b);
	cout << endl;
	UpdatePointers(pa, pb);
	printf("New A: %d\nNew B: %d\n\n", a, b);
	system("PAUSE");
	system("CLS");
}

void Challenges::UpdatePointers(int* a, int* b)
{
	int temp = *a;
	*a = *a + *b;
	*b = abs(temp - *b);
}
#pragma endregion

#pragma region DynamicArrays
void Challenges::DynamicArrays() {
	int n, q;
	cin >> n;
	cin >> q;

	vector<vector<int>> arrays;

	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		vector<int> a;

		for (int j = 0; j < k; j++) {
			int temp;
			cin >> temp;
			a.push_back(temp);
		}

		arrays.push_back(a);
	}

	vector<vector<int>> queries;

	for (int l = 0; l < q; l++) {
		int x, z;
		cin >> x;
		cin >> z;

		vector<int> query;
		query.push_back(x);
		query.push_back(z);

		queries.push_back(query);
	}

	cout << "Result" << endl << endl;
	for (size_t i = 0; i < queries.size(); i++)
	{
		vector<int> query = queries[i];
		vector<int> array = arrays[query[0]];
		cout << array[query[1]] << endl;
	}

	cout << endl << endl;
	system("PAUSE");
	system("CLS");
}
#pragma endregion

#pragma region SumFromPairs
void Challenges::SumFromPairs() 
{
	string values;
	int sum;

	cout << "Enter the array values: ";
	cin >> values;
	cout << "\n";

	cout << "Enter the sum you are looking for: ";
	cin >> sum;
	cout << "\n";

	size_t arrayLength = strlen(values.c_str());
	int *testArray = new int[arrayLength];

	int arrayIndex = 0;
	for (int i = 0; i < arrayLength; i++) {
		testArray[arrayIndex] = int(values[i] - '0');
		arrayIndex++;
	}

	printf("Can %d be gotten from array %s?: %s", sum, values, CheckArray(&testArray, sum) ? "True" : "False");

	cout << endl << endl;
	system("PAUSE");
	system("CLS");
}

bool Challenges::CheckArray(int *testArray[], int &sum) 
{
	int* tempArray = *testArray;
	unordered_set<int> complements;
	for (size_t i = 0; i < sizeof(tempArray); i++)
	{
		if (complements.find(tempArray[i]) != complements.end())
			return true;

		complements.insert(tempArray[i] - sum);
	}

	return false;
}
#pragma endregion

#pragma region WordCounter
void Challenges::WordCounter() 
{
	cin.ignore();
	string text;
	cout << "Introduce the text: ";
	getline(cin, text);

	cout << endl;

	unordered_map<string, int> dictionary;
	vector<string> splitText = Helpers::SplitText(text, ' ', true);
	for (string word : splitText)
	{
		if (word == "") continue;

		if (dictionary.find(word) != dictionary.end()) {
			dictionary.at(word)++;
		}
		else 
		{
			pair tempPair = { word, 1 };
			dictionary.insert(tempPair);
		}
	}

	for(pair<string, int> word:dictionary) cout << word.first << ":" << word.second << endl;

	cout << endl << endl;
	system("PAUSE");
	system("CLS");
}
#pragma endregion

#pragma region BoxIt/ClassOverride
void Challenges::BoxIt() {
	Box temp;
	int type, l, b, h;

	do {
		cout << "___________________________ Box It! ___________________________" << endl << endl <<
			"Current Box Values: " << temp << endl << endl <<
			"1) Print a box generated without the dimensions" << endl <<
			"2) Create a box inputing the dimensions" << endl << 
			"3) Compare 2 Boxes" << endl <<
			"4) Calculate volume of a box generated with teh " << endl <<
			"5) Create a duplicate of a box" << endl <<
			"0) Go Back" << endl <<
			"_______________________________________________________________" << endl << endl <<
			"Select and option: ";

		cin >> type;
		cout << endl << endl;

		if (type == 0)
			break;
		else if (type == 1) {
			cout << temp << endl << endl;
			system("PAUSE");
			system("CLS");
		}
		else if (type == 2) {
			cout << "Length:";
			cin >> l;

			cout << "Breath:";
			cin >> b;

			cout << "Height:";
			cin >> h;

			Box NewBoxT2(l, b, h);
			temp = NewBoxT2;
			cout << temp << endl << endl;
			system("PAUSE");
			system("CLS");
		}
		else if (type == 3) {
			cout << "Length:";
			cin >> l;

			cout << "Breath:";
			cin >> b;

			cout << "Height:";
			cin >> h;

			Box NewBoxT3(l, b, h);
			if (NewBoxT3 < temp)
			{
				cout << "Lesser\n";
			}
			else
			{
				cout << "Greater\n";
			};
			system("PAUSE");
			system("CLS");
		}
		else if (type == 4) {
			cout << temp.CalculateVolume() << endl << endl;
			system("PAUSE");
			system("CLS");
		}
		else if (type == 5) {
			Box NewBoxT5(temp);
			cout << NewBoxT5 << endl << endl;
			system("PAUSE");
			system("CLS");
		}
		else {
			system("CLS");
			cout << "The option selected doesn't exits, try again." << endl << endl;
		}
	} 
	while (type != 0);

	system("CLS");
}
#pragma endregion