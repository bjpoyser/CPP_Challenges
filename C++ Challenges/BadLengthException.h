#pragma once

#include <iostream>

using namespace std;

class BadLengthException : public exception {
private:
	int length;

public:
	BadLengthException(int& n) : length(n) {}

	int what() {
		return length;
	}
};

