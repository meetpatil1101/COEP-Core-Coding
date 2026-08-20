#include <iostream>
using namespace std;
class Base
{
public:
    int var_base = 32;
    virtual void Display()
    {
        cout << "The value of var_base " << var_base << "\n";
    }
};
class Derived : public Base
{
public:
    int var_derived = 23;
    void Display()
    {
        cout << "The value of var_base " << var_base << "\n";
        cout << "The value of var_derived " << var_derived << "\n";
    }
};
int main()
{
    Base *base_class_pointer;
    Base objBase;
    Derived objDerived;
    base_class_pointer = &objDerived;
    base_class_pointer->Display();

    return 0;
}