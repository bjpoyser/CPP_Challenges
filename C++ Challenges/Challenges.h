#pragma once
#include <iostream>
#include <string>
#include <Vector>
#include "Sphere.h"
#include "Helpers.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class Challenges
{
public:
	/// <summary>
	/// 1) Receives a number
	/// 2) From 0 to the number received check if n is product of 3 or 5
	/// 3) if product of 3: print Bizz
	/// 4) if product of 5: print Buzz
	/// 5) if product of both: print BizzBuzz
	/// 6) else print the number
	/// </summary>
	void BizzBuzz();
	/// <summary>
	/// 1) Same as BizzBuzz addind extra features
	/// 2) At the beginning prompt for 3 numbers, the 1st one will represent bizz, the 2nd other one buzz, and the 3rd one will be n
	/// 3) From 0 to the number received check if n is product of bizz or buzz
	/// 4) if product or contains bizz : print Bizz
	/// 5) if product or contains buzz: print Buzz
	/// 6) if product or contains both: print BizzBuzz
	/// 7) else print the number
	/// </summary>
	void BizzBuzzPlus();
	/// <summary>
	/// 1) Receive a string and reverse it
	/// 2) Don't use Reverse command
	/// </summary>
	void ReverseWord();
	/// <summary>
	/// 1) Receive the coordinates and radius of 2 circles
	/// 2) Check if they are intersecting
	/// </summary>
	void SpheresIntersection();
	/// <summary>
	/// 1) The function is declared with a void return type, so there is no value to return. 
	/// 2) Modify the values in memory so that a contains their sum and b contains their absoluted difference.
	/// </summary>
	void PointersManagement();
	/// <summary>
	/// 1) Consider an N -element array, A, where each index I in the array contains a reference to an array of K(I) integers (where the value of K(I) varies from array to array). 
	/// 2) Given A, you must answer Q queries.
	/// 3) Each query is in the format i j, where I denotes an index in array A and J denotes an index in the array located at A[I].
	/// 4) For each query, find and print the value of element J in the array at location A[I] on a new line.
	/// </summary>
	void DynamicArrays();
	/// <summary>
	/// Given an array of numbers and a "SUM" number, check if the addition of a pair in the array gives SUM as result
	/// </summary>
	void SumFromPairs();
	/// <summary>
	/// Given a text, print the number of repetitions a word has
	/// </summary>
	void WordCounter();
	/// <summary>
	/// 1) Design a class named Box whose dimensions are integers and private to the class. The dimensions are labelled: length, breadth, and height.
	/// 2) The default constructor of the class should initialize length, breadth, and height and to 0.
	/// 3) The parameterized constructor Box(int length, int breadth, int height) should initialize Box's l, b and h to length, breadth and height.
	/// 4) The copy constructor Box(Box B) should set l, b and h to B's l, b and h, respectively.
	/// 5) Apart from the above, the class should have 4 functions :
	///		int getLength() - Return box's length
	///		int getBreadth() - Return box's breadth
	///		int getHeight() - Return box's height
	///		long long CalculateVolume() - Return the volume of the box
	///		Overload the operator < for the class Box. Box A < Box B if :
	///			A.length < B.lenght
	///			A.breadth < B.breadth and A.length == B.length
	///			A.heigth < B.height and A.breadth == B.breadth and A.length == B.length
	///		Overload operator << for the class Box().
	///		If B is an object of class Box :
	///			cout << B should print B.length, B.breadth, and B.height on a single line separated by spaces.
	/// </summary>
	void BoxIt();
private:
	bool CheckBizzBuzzPlusNumber(const int &bbNumber, const int &n);

	Sphere CreateSphere();

	void UpdatePointers(int* a, int* b);

	bool CheckArray(int* testArray[], int &sum);
};

