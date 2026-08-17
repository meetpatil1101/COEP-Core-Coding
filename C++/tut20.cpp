#include <iostream>
using namespace std;
class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a, int b, int c);
    void getData()
    {
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
        cout << "The value of c is : " << c << endl;
        cout << "The value of d is : " << d << endl;
        cout << "The value of e is : " << e << endl;
    }
};
void Employee::setData(int a, int b, int c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}
int main()
{
    Employee meet;
    meet.d = 12;
    meet.e = 34;
    meet.setData(8, 9, 10);
    meet.getData();
    return 0;
}