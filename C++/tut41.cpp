#include <iostream>
using namespace std;
class Base1
{int Base1_Data;
    
    public :
    Base1(int data = 0) : Base1_Data(data) 
    {
    }
    int getBase1Data() const { return Base1_Data; }
};
class Base2
{int Base2_Data;
    
public :
    Base2(int data = 0) : Base2_Data(data) 
    {
    }
    int getBase2Data() const { return Base2_Data; }
};
class Derived : public Base1, public Base2
{int Derived_Data;
    
public :
    Derived(int data1 = 0, int data2 = 0) : Base1(data1), Base2(data2), Derived_Data(data1 + data2)
    {
    }
    void display() const
    {
        cout << "Base1 Data: " << getBase1Data() << endl;
        cout << "Base2 Data: " << getBase2Data() << endl;
        cout << "Derived Data: " << Derived_Data << endl;
    }
};

int main()
{
    int data1, data2;
    cout << "Enter Base1 Data: ";
    cin >> data1;
    cout << "Enter Base2 Data: ";
    cin >> data2;

    Derived d(data1, data2);
    d.display();
    
    return 0;
}