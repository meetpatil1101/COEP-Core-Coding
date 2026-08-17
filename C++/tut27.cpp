#include <iostream>
using namespace std;
class x;
class y;
class x 
{int num1;
    public:
    void setvalue(int value)
    {
        num1 = value;
    }
    friend void add( x ,  y);
};
class y 
{int num2;
    public:
    void setvalue(int value)
    {
        num2 = value;
    }
    friend void add( x ,  y);
};
void add(x o1, y o2)
{
    cout << "The sum of data of x and y is " << o1.num1 + o2.num2 << endl;
}
int main()
{int xvalue, yvalue;
    cout << "Enter value for x: "<< endl;
    cin >>  xvalue;
    cout << "Enter value for y: "<< endl;
    cin >>  yvalue;
    x o1;
    y o2;
    o1.setvalue(xvalue);
    o2.setvalue(yvalue);
    add(o1, o2);
    return 0;
}