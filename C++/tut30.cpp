#include <iostream>
#include <math.h>
using namespace std;
class point
{
    friend float distance(point &p1, point &p2);
    int x, y;

public:
    void setData(int a, int b)
    {
        x = a;
        y = b;
    }
    void Display()
    {
        cout << "The value of x is : " << x << endl;
        cout << "The value of y is : " << y << endl;
        cout << "The point is : (" << x << " , " << y << ")" << endl;
    }
};
float distance(point &p1, point &p2)
{
    float d = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    cout << "The distance between the two points is : " << d << endl;
    
}
int main()
{
    point p1, p2;
    p1.setData(10, 20);
    p2.setData(30, 40);
    p1.Display();
    p2.Display();
    distance(p1, p2);
    return 0;
}