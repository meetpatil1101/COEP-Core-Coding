#include <iostream>
using namespace std;
class Employee
{
private:
    int Id;
    static int count;

public:
    void setdata()
    {
        cout << "Enter the Id" << endl;
        cin >> Id;
        count++;
    }
    void getData()
    {
        cout << "The Id of this Employee is " << Id << "and this is the Employee number " << count << endl;
    }
};
int Employee::count = 0;
int main()
{
    Employee e;
    e.setdata();
    e.getData();
    Employee e1;
    e1.setdata();
    e1.getData();
    Employee e2;
    e2.setdata();
    e2.getData();

    
    return 0;
}