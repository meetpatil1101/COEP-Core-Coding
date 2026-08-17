#include <iostream>
using namespace std;
class Base
{

    int data1;
    int data2;

public:
    Base(int value1 = 10, int value2 = 20)
        : data1(value1), data2(value2)
    {}
    int getdata1() const;
    int getdata2() const;
    int getdata3() const;
};
int Base ::getdata1() const
{
    return data1;
}
int Base ::getdata2() const
{
    return data2;
}
int Base ::getdata3() const
{
    return getdata1() + getdata2();
}

class Derived : public Base
{
    int multiplier;
public:
    Derived(int value1 = 10, int value2 = 20, int factor = 2)
        : Base(value1, value2), multiplier(factor)
    {
    }

    void display() const;
};

void Derived ::display() const
{
    int doubled1 = getdata1() * multiplier;
    int doubled2 = getdata2() * multiplier;
    cout << "base data1: " << getdata1() << endl;
    cout << "base data2: " << getdata2() << endl;
    cout << "derived data1: " << doubled1 << endl;
    cout << "derived data2: " << doubled2 << endl;
    cout << "derived data3: " << (doubled1 + doubled2) << endl;
}
int main()
{
    Base b1;
    cout << "data1 Before: " << b1.getdata1() << endl;
    cout << "data2 Before: " << b1.getdata2() << endl;
    cout << "data3 Before: " << b1.getdata3() << endl;
    Derived d1(10, 20, 2);
    d1.display();
    return 0;
}