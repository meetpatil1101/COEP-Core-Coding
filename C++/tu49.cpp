#include <iostream>
using namespace std;
class Test
{
protected:
    int a;
    int b;

public:
    Test(int i, int j)
    {
        a = i;
        b = j;
    }
    int Display()
    {

        cout << "Constructor Executed" << endl;
        cout << "The value of a " << a << endl;
        cout << "The value of b " << b << endl;
    }
};
int main()
{
    Test t(5, 6);
    t.Display();
    return 0;
}