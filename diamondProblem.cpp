#include <iostream>
using namespace std;

class A
{
public:
    int a = 500, b = 300;
    void Add()
    {
        cout << "a + b =" << a + b;
    }
};

class B : virtual public A
{
public:
    void Sub()
    {
        cout << "a - b =" << a - b;
    }
};

class C : virtual public A
{
public:
    void mul()
    {
        cout << "a * b =" << a * b;
    }
};

class D : public B, public C
{
public:
    void div()
    {
        cout << "a / b =" << a / b;
    }
};
int main()
{
    B b;
    C c;
    D d;
    b.Sub();
    c.mul();
    d.Add();

    return 0;
};