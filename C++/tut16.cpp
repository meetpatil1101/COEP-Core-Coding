#include <iostream>
using namespace std;
void arrayRev(int array[])
{
    for (int i = 0; i < 2; i++)
    {
        int temp = array[i];
        array[i] = array[3 - i];
        array[3 - i] = temp;
    }
}
int main()
{
    int array[4] = {1, 2, 3, 4};
    cout << "The original array is :" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "The number at position " << i + 1 << " is " << array[i] << endl;
    }
    cout << endl
         << endl;

    arrayRev(array);
    cout << "The reverse array is :" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "The number at position " << i + 1 << " is " << array[i] << endl;
    }
    return 0;
}