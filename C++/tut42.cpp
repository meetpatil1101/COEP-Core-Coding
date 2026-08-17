#include <iostream>
#include <cmath>

using namespace std;

class Simple_Calculator
{
    int a, b;

public:

    float add()
    {
        cout << "Enter two numbers: " << endl;
        cin >> a >> b;
        cout << "Sum: " << a + b << endl;
        return a + b;
    }

    float subtract()
    {
        cout << "Enter two numbers: " << endl;
        cin >> a >> b;
        cout << "Difference: " << a - b << endl;
        return a - b;
    }

    float multiply()
    {
        cout << "Enter two numbers: " << endl;
        cin >> a >> b;
        cout << "Product: " << a * b << endl;
        return a * b;
    }

    float divide()
    {
        cout << "Enter two numbers: " << endl;
        cin >> a >> b;
        if (b == 0)
        {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0;
        }
        cout << "Quotient: " << a / b << endl;
        return a / b;

        return 0;
    }
};
class Scientific_Calculator
{
    float a;

public:
    static float degToRad(float degrees)
    {
        return degrees * 3.14159265358979323846f / 180.0f;
    }

    static float radToDeg(float radians)
    {
        return radians * 180.0f / 3.14159265358979323846f;
    }

    float cosine()
    {
        cout << "Enter angle in degrees: " << endl;
        cin >> a;
        float result = std::cos(degToRad(a));
        cout << "Cosine: " << result << endl;
        return result;
    }
    float sine()
    {
        cout << "Enter angle in degrees: " << endl;
        cin >> a;
        float result = std::sin(degToRad(a));
        cout << "Sine: " << result << endl;
        return result;
    }

    float tangent()
    {
        cout << "Enter angle in degrees: " << endl;
        cin >> a;
        float result = std::tan(degToRad(a));
        cout << "Tangent: " << result << endl;
        return result;
    }

    float arccos()
    {
        cout << "Enter a value (-1 to 1): " << endl;
        cin >> a;
        float result = radToDeg(std::acos(a));
        cout << "Arccosine (degrees): " << result << endl;
        return result;
    }

    float arcsin()
    {
        cout << "Enter a value (-1 to 1): " << endl;
        cin >> a;
        float result = radToDeg(std::asin(a));
        cout << "Arcsine (degrees): " << result << endl;
        return result;
    }

    void Display()
    {
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Cosine" << endl;
        cout << "6. Sine" << endl;
        cout << "7. Tangent" << endl;
        cout << "8. Arccosine" << endl;
        cout << "9. Arcsine" << endl;
    }
};
class Hybrid_Calculator : public Simple_Calculator, public Scientific_Calculator
{

};
int main()
{
int choice;

    Hybrid_Calculator calc;
    calc.Display();
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        calc.add();
        break;
    case 2:
        calc.subtract();
        break;
    case 3:
        calc.multiply();
        break;
    case 4:
        calc.divide();
        break;
    case 5:
        calc.cosine();
        break;
    case 6:
        calc.sine();
        break;
    case 7:
        calc.tangent();
        break;
    case 8:
        calc.arccos();
        break;
    case 9:
        calc.arcsin();
        break;
    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    return 0;
}