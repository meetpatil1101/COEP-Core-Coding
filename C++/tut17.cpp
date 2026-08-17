#include <iostream>
using namespace std;
// inline int product(int a , int b)
// {
//    return a*b ;
// }
float bankInterest(int moneyDeposited, float interestRate = 1.08)
{
    return moneyDeposited * interestRate;
}
int main()
{
    //     int a , b ;
    //     cout << "Enter value of a" <<endl;
    //     cin >> a  ;
    //     cout <<"Enter value of b" <<endl;
    //     cin >> b  ;
    //     cout << "The product of a and b is : "<<product(a , b) ;
    float moneyDeposited , interestRate ;
    cout << "Enter value of moneyDeposited" <<endl;
    cin >> moneyDeposited ,
    cout << "In your deposits you have : " << moneyDeposited << " \nAfter a year this money would be : " << bankInterest(moneyDeposited) <<endl;
    return 0;
}