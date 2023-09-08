// Problem 4: Operator Overloading. Overload the + operator for the Rectangle class so that you can add two rectangles together to create a new rectangle with dimensions equal to the sum of the dimensions of the two rectangles. Test the operator overloading by adding two rectangles.

#include <iostream>
using namespace std;

class Rectangle
{
    float length, width;

public:
    Rectangle()
    {
        length = width = 0;
    }

    void input(){
        cout<<"Enter length: "<<endl;
        cin>>length;
        cout<<"Enter Width: "<<endl;
        cin>>width;
    }

    void Show(){
        cout<<"length = " <<length << "\nwidth = "<<width <<endl;
        cout<<"The area of new rectangle is: "<<length * width;
    };


    Rectangle operator+(Rectangle p)
    {
        Rectangle temp;
        temp.length = p.length + length;
        temp.width = p.width + width;
        return temp;
    }
};
int main()
{
    Rectangle r1, r2, r3;
    cout<<"Rectange 1: "<<endl;
    r1.input();
    cout<<"Rectange 2: "<<endl;
    r2.input();
    r3 = r1 + r2;
    r3.Show();
    return 0;
};
