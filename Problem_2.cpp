// Problem 2: Inheritance. Create a base class called Shape with a pure virtual function area(). Then, create two derived classes, Circle and Rectangle, that inherit from Shape. Implement the area() function in each derived class to calculate the area of the respective shape.

#include <iostream>
using namespace std;

// pure virtual function
class Shape
{
    virtual void area() = 0;
};

// circle derived class
class Circle : Shape
{
public:
    float radius;

    Circle(float r)
    {
        radius = r;
    }
    void area()
    {
        cout << "Area of circle is : " << 3.14 * (radius * radius) << endl;
    }
};

// rectangle derived class
class Rectangle : Shape
{
public:
    float length, width;
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }
    void area()
    {
        cout << "Area of Rectangle is : " << length * width;
    }
};

int main()
{
    // area of circle
    Circle c = Circle(5.4);
    c.area();
    // area of rectangle
    Rectangle r = Rectangle(3.4, 5.2);
    r.area();

    return 0;
};