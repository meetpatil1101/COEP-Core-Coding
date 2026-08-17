#include <iostream>
using namespace std;

class complex
{
    int a, b;
   public:
    complex(int x = 0, int y = 0) : a(x), b(y)
    {
        a = x;
        b = y;
    }
    // complex(int x)
    // {
    //     a = x;
    //     b = 0;
    // }
    // complex(int x, int y)
    // {
    //     a = x;
    //     b = y;
    // }
    void print()
    {
        cout << "The complex number is : " << a << " + " << b << "i" << endl;
    }
}; 
int main()
{
    cout << "COMPLEX NUMBER" << endl;
    complex c1 ;
    c1.print();
    
    complex c2(10) ;
    c2.print();
    
    complex c3(2 , 3) ;
    c3.print();
    
    return 0;
}