#include <iostream>
using namespace std;
int fibonacci_number(int n)
{ 
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 0 ;
    }
    else
    {
        return fibonacci_number(n - 1) + fibonacci_number(n - 2);
    }
}
int main()
{
     int n ;
    cout <<"Enter the number whose fibonacci number you want" << endl;
    cin >> n ;
    if (n < 0) 
    {
        cout << "fibonacci series not defined for negative numbers\n";
        return 0;
    }
    cout <<"The fibonacci number of number is : " << fibonacci_number(n) ;
    return 0;
}