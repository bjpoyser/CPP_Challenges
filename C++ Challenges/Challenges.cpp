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

	vector<string> stringVector = Helpers::SplitText(centerString, ',');
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

