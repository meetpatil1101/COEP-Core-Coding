#include <iostream>
using namespace std;
class complexNumber;
class calculator
{
    int add(int a, int b)
    {
        return (a + b);
    }
public:
    int sumRealComplex(const complexNumber &o1, const complexNumber &o2);
    int sumImaginaryComplex(const complexNumber &o1, const complexNumber &o2);
};
class complexNumber
{
    int a;
    int b;

public:
    friend int calculator::sumRealComplex(const complexNumber &o1, const complexNumber &o2);
    friend int calculator::sumImaginaryComplex(const complexNumber &o1, const complexNumber &o2);
    complexNumber(int v1 = 0, int v2 = 0)
        : a(v1), b(v2)
    {
    }

    void setDataBySum(const complexNumber &o1, const complexNumber &o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printSum() const
    {
        cout << "Your complex number is " << a;
        if (b >= 0)
            cout << " + " << b << "i";
        else
            cout << " - " << -b << "i";
        cout << endl;
    }
};

int calculator::sumRealComplex(const complexNumber &o1, const complexNumber &o2)
{
    return o1.a + o2.a;
}

int calculator::sumImaginaryComplex(const complexNumber &o1, const complexNumber &o2)
{
    return o1.b + o2.b;
}

int main()
{
    complexNumber c1(4, 5), c2(6, 7);
    calculator calc;
    cout << "The sum of real part of complex number is " << calc.sumRealComplex(c1, c2) << endl
         << "The sum of imaginary part of complex number is " << calc.sumImaginaryComplex(c1, c2) << endl;
    return 0;
}