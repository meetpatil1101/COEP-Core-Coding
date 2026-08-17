#include <iostream>
using namespace std;
float volume_of_cylinder(double r, int h)
{
    return (3.14 * r * r * h);
}

int volume_of_cuboid(int l, int b, int d)
{
    return (l * b * d);
}

int volume_of_cube(int a)
{
    return (a * a * a);
}

int main()
{
    int r, h;
    cout << "Enter the radius of cylinder" << endl;
    cin >> r;
    cout << "Enter the height of cylinder" << endl;
    cin >> h;
    cout << "the volume of cylinider is : " << volume_of_cylinder(r, h) << endl;    

    int l, b, d;
    cout << "Enter the length of cuboid" << endl;
    cin >> l;
    cout << "Enter the bredth of cuboid" << endl;
    cin >> b;
    cout << "Enter the height of cuboid" << endl;
    cin >> d;
    cout << "the volume of cuboid is : " << volume_of_cuboid(l, b, d) << endl;

    int a;
    cout << "Enter the length of cube" << endl;
    cin >> a;
    cout << "the volume of cube is : " << volume_of_cube(a) << endl;
    return 0;
}