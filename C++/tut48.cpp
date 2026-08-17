#include <iostream>
using namespace std;
class Base1
{
    protected :
    int Data1;

public:
    Base1(int a)
    {
        Data1 = a ;
        cout << "Enter value for data1: " << endl;
        cin >> Data1;
        cout << "The constructor Base1 was called " << endl;
    }
};
class Base2
{
    protected :
    int Data2;
    
    public:
    Base2(int b)
    {
        Data2 = b ;
        cout << "Enter value for data2: " << endl;
        cin >> b;
        cout << "The constructor Base2 was called " << endl;
        
    }
};
class Derived : public Base1, public Base2
{
    protected : 
    int Derived1, Derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        Derived1 = c;
        cout << "Enter value for derived1: " << endl;
        cin >> c;
        Derived2 = d;
        cout << "The constructor derived1 was called" << endl;
        cout << "Enter value for derived2: " << endl;
        cin >> d;
        cout << "The constructor derived2 was called" << endl;
    }
    void Display()
    {
         cout <<"the value of Data1 is : " << Data1 << endl;
         cout <<"the value of Data2 is : " << Data2 << endl;
         cout <<"the value of Derived1 is : " << Derived1 << endl;
         cout <<"the value of Derived2 is : " << Derived2 << endl;
    }
};
int main()
{
Derived der(1 , 2 , 3 , 4) ;
der.Display() ;
    return 0;
}