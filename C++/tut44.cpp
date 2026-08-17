#include <iostream>
#include <vector>
using namespace std;
class Student
{
private:
    int roll_No;
    string name;

public:
    void studentDetails()
    {
        cout << "Enter Roll Number: ";
        cin >> roll_No;
        cout << "Enter Name: ";
        cin >> name;
    }
    int getRollNo() const { return roll_No; }
    const string &getName() const { return name; }
};
class study : virtual public Student
{

private:
    int i;
    vector<string> subjects;

public:
    void subjectDetails()
    {
        cout << "Enter Number of Subjects you have : ";
        cin >> i;
        subjects.clear();
        subjects.reserve(i);
        for (int j = 0; j < i; j++)
        {
            string subj;
            cout << "Enter Subject " << j + 1 << ": ";
            cin >> subj;
            subjects.push_back(subj);
        }
    }
    const vector<string>& getSubjects() const { return subjects; }
};
class sports : virtual public Student
{
private:
    string outdoor_game;
    string indoor_games;

public:
    void outdoorGameDetails()
    {
        cout << "Enter Outdoor Game: ";
        cin >> outdoor_game;
    }
    void indoorGameDetails()
    {
        cout << "Enter Indoor Game: ";
        cin >> indoor_games;
    }
    const string& getOutdoorGame() const { return outdoor_game; }
    const string& getIndoorGame() const { return indoor_games; }
};
class Result : public study, public sports
{
    vector<int> marks;

public:
    void getMarks()
    {
        marks.clear();
        const auto &subs = getSubjects();
        marks.reserve(subs.size());
        for (size_t k = 0; k < subs.size(); ++k)
        {
            int m;
            cout << "Enter Marks of subject " << subs[k] << ": ";
            cin >> m;
            marks.push_back(m);
        }
    }
    void display()
    {
        studentDetails();
        subjectDetails();
        getMarks();
        outdoorGameDetails();
        indoorGameDetails();
        
        cout << "--------------------------" << endl;
        cout << "Summary:" << endl;
        cout << "Roll Number: " << getRollNo() << endl;
        cout << "Name: " << getName() << endl;
        const auto &subs = getSubjects();
        cout << "Subjects and Marks:" << endl;
        for (int l = 0; l < subs.size(); ++l)
        {
            cout << " - " << subs[l] << ": ";
            if (l < marks.size()) cout << marks[l]; else cout << "N/A";
            cout << endl;
        }
        cout << "Outdoor Game: " << getOutdoorGame() << endl;
        cout << "Indoor Game: " << getIndoorGame() << endl;
    }
};
int main()
{
    Result r;
    r.display();

    return 0;
}