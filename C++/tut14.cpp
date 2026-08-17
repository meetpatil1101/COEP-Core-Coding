#include <iostream>
using namespace std;
void sum(int number1, int number2) ;
int main()
{int number1 , number2 ;
    cout <<"Enter number1 "<<endl;
    cin >> number1 ;
    cout <<"Enter number2 "<<endl;
    cin >> number2 ;
sum(number1 , number2) ;
    return 0;
}
void sum(int number1, int number2)
{
  int result = number1 + number2 ;
  cout <<"Sum: "<<result;
}