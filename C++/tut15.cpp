#include <iostream>
using namespace std;

/*void swapPointer(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}*/
void swapPointer(int &a, int &b)
{    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 5;
    int y = 10;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapPointer(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;


    return 0;
}