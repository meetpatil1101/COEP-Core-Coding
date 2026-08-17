#include <iostream>
using namespace std;
class complex
{
protected:
int a ;
int b ;
public:
    complex(int a , int b)
{
    cout << "Enter the value of real part" <<endl ;
    cin >> a ;
    cout << "Enter the value of imaginary part" <<endl ;
    cin >> b ;
cout << "The value of complex number is " << a << " + " << b << "i" << endl ;
}
};

int main()
{
    complex c1(0 , 0) ;
    complex *ptr = new complex(0 , 0) ;

    return 0;
}