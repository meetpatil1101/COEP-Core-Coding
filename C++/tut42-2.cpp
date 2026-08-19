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
        return (float) a / b;
    }
};
class Scientific_Calculator
{
    float a, b;

public:
    static float degToRad(float degrees)
    {
        return degrees * M_PI / 180.0f;
    }
    static float radToDeg(float radians)
    {
        return radians * 180.0f / 3.14159265358979323846f ;
    }

    float cosine(int angleChoice)
    {
        float result = 0.0f;
        if (angleChoice == 1)
        {
            cout << "Enter angle in Degrees: " << endl;
            cin >> a;
            result = std::cos(degToRad(a));
            cout << "Cosine: " << result << endl;
        }
        else if (angleChoice == 2)
        {
            cout << "Enter angle in Radian: " << endl;
            cin >> b;
            result = std::cos(b);
            cout << "Cosine: " << result << endl;
        }
        else
        {
            cout << "Error : Please enter 1 or 2" << endl;
        }
        return result;
    }

    float sine(int angleChoice)
    {
        float result = 0.0f;
        if (angleChoice == 1)
        {
            cout << "Enter angle in Degrees: " << endl;
            cin >> a;
            result = std::sin(degToRad(a));
            cout << "sine: " << result << endl;
        }
        else if (angleChoice == 2)
        {
            cout << "Enter angle in Radian: " << endl;
            cin >> b;
            result = std::sin(b);
            cout << "sine: " << result << endl;
        }
        else
        {
            cout << "Error : Please enter 1 or 2" << endl;
        }
        return result;
    }

    float tangent(int angleChoice)
    {
        float result = 0.0f;
        if (angleChoice == 1)
        {
            cout << "Enter angle in Degrees: " << endl;
            cin >> a;
            result = std::tan(degToRad(a));
            cout << "tan: " << result << endl;
        }
        else if (angleChoice == 2)
        {
            cout << "Enter angle in Radian: " << endl;
            cin >> b;
            result = std::tan(b);
            cout << "tan: " << result << endl;
        }
        else
        {
            cout << "Error : Please enter 1 or 2" << endl;
        }
        return result;
    }

    float arccos()
    {
        cout << "Enter a value (-1 to 1): " << endl;
        cin >> a;
        float rad = std::asin(a);
        float deg = radToDeg(rad);
        cout << "Arccosine (radians): " << rad << endl;
        cout << "Arccosine (degrees): " << deg << endl;
        return deg;
    }
    float arcsin()
    {
        cout << "Enter a value (-1 to 1): " << endl;
        cin >> a;
        float rad = std::asin(a);
        float deg = radToDeg(rad);
        cout << "Arcsine (radians): " << rad << endl;
        cout << "Arcsine (degrees): " << deg << endl;
        return deg;
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
    int choice, choice2;

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
        cout << "Press 1 to enter angle in Degrees" << endl
             << "Press 2 to enter angle in Radians" << endl;
        cin >> choice2;
        calc.cosine(choice2);
        break;
    case 6:
        cout << "Press 1 to enter angle in Degrees" << endl
             << "Press 2 to enter angle in Radians" << endl;
        cin >> choice2;
        calc.sine(choice2);
        break;
    case 7:
        cout << "Press 1 to enter angle in Degrees" << endl
             << "Press 2 to enter angle in Radians" << endl;
        cin >> choice2;
        calc.tangent(choice2);
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