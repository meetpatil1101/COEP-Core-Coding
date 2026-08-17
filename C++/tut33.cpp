#include <iostream>
#include <cmath>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit();
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void print();
};

// BankDeposit::BankDeposit()
//     : principal(0), years(0), interestRate(0.0f), returnValue(0.0f)
// {
// }

BankDeposit::BankDeposit(int p, int y, float R)
    : principal(p), years(y), interestRate(R)
{
    returnValue = principal * pow((1 + interestRate), years);
}

BankDeposit::BankDeposit(int p, int y, int r)
    : principal(p), years(y), interestRate(float(r) / 100.0f)
{
    returnValue = principal * pow((1 + interestRate), years);
}

void BankDeposit::print()
{
    cout << "The principal value is : " << principal << endl;
    cout << "The interest rate is : " << interestRate << endl;
    cout << "The number of years is : " << years << endl;
    cout << "The return value after " << years << " years is : " << returnValue << endl;
}

int main()
{
    int p , y , r;
    float R;
 
    BankDeposit bd1(p, y, R);
    bd1.print();
    cout << "Enter the principal value (p): ";
    cin >> p;
    cout << "Enter the number of years (y): ";
    cin >> y;
    cout << "Enter the interest rate in the form of a percentage (r): ";
    cin >> r;
    
    BankDeposit bd2(p, y, R);
    bd2.print();  
    cout << "Enter the principal value (p): ";
    cin >> p;
    cout << "Enter the number of years (y): ";
    cin >> y;
    cout << "Enter the interest rate in decimal form (R): ";    
    cin >> R ;
    
    return 0;
}