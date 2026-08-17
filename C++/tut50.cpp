#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int* ptr = &a;
    int* p = new int(40);
    cout << "The value of a is " << *(ptr) << endl;
    cout << "The new value of a is " << *(p) << endl;
    delete[] p ;
    int *arr = new int[3] ;
    arr[0] = 10 ;
    arr[1] = 20 ;
    arr[2] = 30 ;
    // delete[] arr ;

    cout << "the value of arr[0] " << arr[0] << endl ;
    cout << "the value of arr[1] " << arr[1] << endl ;
    cout << "the value of arr[2] " << arr[2] << endl ;
    return 0;
}