#include <iostream>
using namespace std;

int Factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * Factorial(n - 1);
    }
}
int main()
{ int n ;
    cout <<"Enter the number whose factorial you want" << endl;
    cin >> n ;
    if (n < 0) 
    {
        cout << "Factorial not defined for negative numbers\n";
        return 0;
    }
    cout <<"The factorial of number is : " << Factorial(n) ;
    return 0;
}