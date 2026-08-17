#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num )
    {
        a = num;
    }
    Number(Number &obj)
    {
        cout << "Copy constructor called" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number of object is : " << a << endl;
    }
};
int main()
{
    Number x , y , z(765);

    x.display();
    y.display();
    z.display();
    Number z1(z);
    z1.display();
    Number z2 = z;
    z2.display();
    z2 = x; // incorrect way to call copy constructor
    return 0;
}