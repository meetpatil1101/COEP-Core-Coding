#include <iostream>
class StudentRecords 
{
    protected :
    int student_Id ;    
    public :
    StudentRecords(int id = 0) : student_Id(id) 
    {}
};
class Exam : public StudentRecords
{
    protected :
    int Math_Marks;
    int Physics_Marks;
    int Chemistry_Marks;
    public :
    Exam(int id = 0, int math = 0, int physics = 0, int chemistry = 0) : StudentRecords(id), Math_Marks(math), Physics_Marks(physics), Chemistry_Marks(chemistry)
    {}
};
class StudentResult : public Exam
{
    protected :
    int Total_Marks;
    public :
    int rank;
    void display()
    {   int Total_Candidates = 1604854;
        std::cout << "-------------------" << std::endl; 
        std::cout << "Final Report Card" << std::endl;
        std::cout << "Student ID: " << student_Id << std::endl;
        std::cout << "Math Marks: " << Math_Marks << std::endl;
        std::cout << "Physics Marks: " << Physics_Marks << std::endl;
        std::cout << "Chemistry Marks: " << Chemistry_Marks << std::endl;
        double percentage = (Total_Marks / 3.0);
        std::cout << "Percentage: " << percentage << "%" << std::endl;
        double percentile = (static_cast<double>(Total_Candidates - rank) / Total_Candidates) * 100.0;
        std::cout << "Percentile: " << percentile << "%" << std::endl;
    }
    StudentResult(int id = 0, int math = 0, int physics = 0, int chemistry = 0, int rankValue = 0) : Exam(id, math, physics, chemistry), rank(rankValue)
    {
        Total_Marks = Math_Marks + Physics_Marks + Chemistry_Marks;
        std::cout << "Total Marks: " << Total_Marks << std::endl;
    }
};
int main()
{
    int id, math, physics, chemistry , rank;
    std::cout << "Enter Student ID: ";
    std::cin >> id;
    std::cout << "Enter Math Marks: ";
    std::cin >> math;
    std::cout << "Enter Physics Marks: ";
    std::cin >> physics;
    std::cout << "Enter Chemistry Marks: ";
    std::cin >> chemistry;
    std::cout << "Enter Rank: " << std::endl;
    std::cin >> rank;
    
    StudentResult student(id, math, physics, chemistry, rank);
    student.display();
    return 0;
}