#include <iostream>
using namespace std;
class complexNumber
{
    int a;
    int b;

public:
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
int main()
{
    int v1, v2, v3, v4;
    cout << "COMPLEX NUMBERS ADDITION" << endl;
    cout << "Enter the first complex number's real part " << endl;
    cin >> v1;
    cout << "Enter the first complex number's imaginary part " << endl;
    cin >> v2;
    complexNumber c1(v1, v2);
    c1.printSum();

    cout << "Enter the second complex number's real part " << endl;
    cin >> v3;
    cout << "Enter the second complex number's imaginary part " << endl;
    cin >> v4;
    complexNumber c2(v3, v4);
    c2.printSum();

    cout << "Adding above complex numbers" << endl;
    complexNumber c3;
    c3.setDataBySum(c1, c2);
    c3.printSum();
    return 0;
}
