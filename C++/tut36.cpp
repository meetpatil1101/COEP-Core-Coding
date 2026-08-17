#include <iostream>
using namespace std;
int s;
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;

        salary = s;
    }
    Employee (){}
};

class Programmer : public Employee
{
public:
    Programmer(int inpId) 
    {
        id = inpId;
    }
    int Languagecode = 7;
};

int main()
{
    cout << "Enter Employee salary: ";
    cin >> s;
    Employee e1(1);
    cout << "id: " << e1.id << endl
         << "Salary: " << e1.salary << endl;
    Programmer skillF(1);
    skillF.Languagecode = 7;
    cout << "id: " << skillF.id << endl
         << "Language Code: " << skillF.Languagecode << endl;
    return 0;
}