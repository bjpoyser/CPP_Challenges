#include "Box.h"

#pragma region Constructors
Box::Box() {
    length = breadth = height = 0;
}

Box::Box(int newLength, int newBreadth, int newHeight) {
    length = newLength;
    breadth = newBreadth;
    height = newHeight;
}

Box::Box(Box& copyBox) {
    length = copyBox.length;
    breadth = copyBox.breadth;
    height = copyBox.height;
}
#pragma endregion

#pragma region Functions
int Box::getLength() {
    return length;
}

int Box::getBreadth() {
    return breadth;
}

int Box::getHeight() {
    return height;
}

int long long Box::CalculateVolume() {
    return (long long)(breadth)*length * height;
}
#pragma endregion

#pragma region Overrides

bool Box::operator<(Box& boxB) {
    return (length < boxB.length) ||
        (breadth < boxB.breadth && length == boxB.length) ||
        (height < boxB.height && breadth == boxB.breadth && length == boxB.length);
}

ostream& operator<<(ostream& out, Box& boxB)
{
    out << boxB.length << " " << boxB.breadth << " " << boxB.height;
    return out;
}
#pragma endregion