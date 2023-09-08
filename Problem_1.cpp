// Problem 1: Class and Object. Create a C++ class called Rectangle with attributes length and width. Implement member functions to set and get the dimensions of the rectangle, calculate its area, and calculate its perimeter. Then, create two objects of the Rectangle class and print their areas and perimeters.

#include <iostream>
using namespace std;

template <class T>
class rectangle
{
    T length, width;

public:

    int setDimensions(T l, T w)
    {
        length = l;
        width = w;
    }

    void getDimensions()
    {
        // to calculate area
        T area = length * width;
        cout << "The Area of Rectangle is: " << area << endl;
        // to calculate perimeter
        T perimeter = (length + width) * 2;
        cout << "The perimeter of Rectangle is: " << perimeter << endl;
    }
};


int main()
{
    cout << "Rectangle 1" << endl;
    rectangle<float> rec;
    rec.setDimensions(2.14, 3.14);
    rec.getDimensions();

    cout << "Rectangle 2" << endl;
    rectangle<float> rec2;
    rec2.setDimensions(8.54, 2.3);
    rec2.getDimensions();
    return 0;
};
