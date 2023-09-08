// Problem 3: Polymorphism. Using the Shape, Circle, and Rectangle classes from Problem 2, create an array of pointers to Shape objects that includes both Circle and Rectangle objects. Use polymorphism to calculate and print the areas of all the shapes in the array.

#include <iostream>
using namespace std;

// pure virtual function
class Shape
{
    public:
    virtual float area() = 0;
};

// circle derived class
class Circle : public Shape
{
public:
    float radius;

    Circle(float r)
    {
        radius = r;
    }
    float area()
    {
        cout<<"The area of circle is: "<< 3.14 * (radius * radius)<<endl;
    }
};

// rectangle derived class
class Rectangle : public Shape
{
public:
    float length, width;
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }
    float area()
    {
        cout<<"The area of Rectangle is: "<< length * width<<endl;
    }
};


int main()
{
    Shape *shapes[2];

    Circle c(4.5);
    Rectangle r(3.2, 4.6);
    shapes[0] = &c;
    shapes[1] = &r;

    for (int i = 0; i < 2; i++)
    {
        shapes[i]->area();
    }

    return 0;
};