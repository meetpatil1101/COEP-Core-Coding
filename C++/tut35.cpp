#include <iostream>
using namespace std;
int count = 0;
class Number
{

public:
    Number()
    {
        count++;
        cout << "This is the time when constructor is called " << count << endl;
    }
    ~Number()
    {
        cout << "This is the time when destructor is called " << count << endl;
        count--;
    }
};

int main()
{
    cout << "Welocme to main function" << endl;
    cout << "Creating first object n1 " << endl;
    Number n1;
    {
        cout << "Entering this block" << endl;
        cout << "Adding two more objects" << endl;
        Number n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main function" << endl;
    return 0;
}