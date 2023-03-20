#include <ostream>

using namespace std;

//Implement the class Box  
class Box {
    //l,b,h are integers representing the dimensions of the box
private:
    int length;
    int breadth;
    int height;

public:
    // Constructors: 
    // Box();
    Box();

    // Box(int,int,int);
    Box(int newLength, int newBreadth, int newHeight);

    // Box(Box);
    Box(Box& copyBox);

    // The class should have the following functions : 
    // int getLength(); // Return box's length
    int getLength();

    // int getBreadth (); // Return box's breadth
    int getBreadth();

    // int getHeight ();  //Return box's height
    int getHeight();
    
    // long long CalculateVolume(); // Return the volume of the box
    int long long CalculateVolume();

    //Overload operator < as specified
    //bool operator<(Box& b)
    bool operator<(Box& boxB);

    //Overload operator << as specified
    //ostream& operator<<(ostream& out, Box& B)
    friend ostream& operator<<(ostream& out, Box& boxB);
};

