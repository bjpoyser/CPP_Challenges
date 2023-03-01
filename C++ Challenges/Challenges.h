#pragma once
#include <iostream>
#include <string>
#include <Vector>
#include "Sphere.h"
#include "Helpers.h"

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
private:
	bool CheckBizzBuzzPlusNumber(const int &bbNumber, const int &n);

	Sphere CreateSphere();
};

