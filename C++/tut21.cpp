#include <iostream>
using namespace std;
class Binary_No
{
    string s;

public:
    void read();
    bool chk_bin();
    void ones_compliment();
    void Display();
    void Re_Display();
};
void Binary_No ::read()
{    
    cout << "Enter the number" << endl;
    cin >> s;
}
bool Binary_No::chk_bin()
{
    bool isBinary = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            isBinary = false;
            break;
        }
    }
    if (isBinary)
    {
        cout << "The above number is binary" << endl;
    }
    else
    {
        cout << "The above number is not binary" << endl;
    }
    return isBinary;
}
void Binary_No::ones_compliment()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}
void Binary_No ::Display()
{
    cout << "Displaying your binary function" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
void Binary_No ::Re_Display()
{
    cout << "Redisplaying your binary function after ones compliment " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    cout << "To check if number is binary or not binary" << endl;
    Binary_No b;
    b.read();
    bool isBinary = b.chk_bin();
    b.Display();
    if (isBinary)
    {
        b.ones_compliment();
        b.Re_Display();
    }
    else
    {
        cout << "Cannot perform ones complement on non-binary input." << endl;
    }
    return 0;
}
