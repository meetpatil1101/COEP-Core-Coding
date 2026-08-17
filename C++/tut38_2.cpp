#include <iostream>
class Base
{

    int data1;
    int data2;

public:
    Base(int value1 = 10, int value2 = 20)
        : data1(value1), data2(value2)
    {}
    int getData1() const;
    int getData2() const;
    int getData3() const;
};
int Base::getData1() const
{
    return data1;
}
int Base::getData2() const
{
    return data2;
}
int Base::getData3() const
{
    return getData1() + getData2();
}

class Derived : public Base
{
    int doubleData1 = 0;
    int doubleData2 = 0;
public:
    void display() const;
    void process();
};
void Derived::process()
{
    doubleData1 = getData1() * 2;
    doubleData2 = getData2() * 2;
}
void Derived::display() const
{
    std::cout << "Data1 After: " << doubleData1 << std::endl;
    std::cout << "Data2 After: " << doubleData2 << std::endl;
    std::cout << "Data3 After: " << (doubleData1 + doubleData2) << std::endl;
}
int main()
{
    Base b1;
    std::cout << "Data1 Before: " << b1.getData1() << std::endl;
    std::cout << "Data2 Before: " << b1.getData2() << std::endl;
    std::cout << "Data3 Before: " << b1.getData3() << std::endl;
    std::cout << "-------------------" << std::endl;
    Derived d1;  
    d1.process();
    d1.display();
    return 0;
}
