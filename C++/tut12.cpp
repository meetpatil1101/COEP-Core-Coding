#include <iostream>
using namespace std;

int main()
{int a =3 ;
    int * b =&a ;
    int**c =&b ;
    cout << "The address of a : "<<&a<<endl ;
    cout << "The address of b : " <<&b<<endl;
    cout << "The address of c : " <<&c<<endl;
    cout<<"------------------------"<<endl;
    cout << "The value of a : "<<a<<endl ;
    cout << "The value of b : " <<*b<<endl;
    cout << "The value of c : " <<**c;


    return 0;
}