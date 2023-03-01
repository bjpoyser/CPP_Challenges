#pragma once

#include <vector>
#include <string>

using namespace std;

class Sphere
{
public:
	double center[2];
	double radius;

	Sphere(const double newCenter[], const double& newRadius) {
		center[0] = newCenter[0];
		center[1] = newCenter[1];
		radius = newRadius;
	}
};

