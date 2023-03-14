#pragma once
#include <iostream>
#include <string>
#include <Vector>
#include "Sphere.h"
#include "Helpers.h"
#include <stdio.h>
#include <cstdlib>

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
private:
	bool CheckBizzBuzzPlusNumber(const int &bbNumber, const int &n);

	Sphere CreateSphere();

	void UpdatePointers(int* a, int* b);
};

