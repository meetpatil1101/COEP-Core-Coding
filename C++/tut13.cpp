#include <iostream>
using namespace std;

int main()
{
    int marks[] = {67 , 46 , 86 , 56};
    cout << "The marks of students are : "<<endl ;
    int i=0 ;
/* while (i<4)
    {
        cout<<"The marks of " <<i<<" is "<< marks[i]<<endl ;
        i++ ;
    } */
    do
    {
        cout<<"The marks of " <<i<<" is "<< marks[i]<<endl ;
        i++ ;    
    } while (i<4);
    return 0;
}