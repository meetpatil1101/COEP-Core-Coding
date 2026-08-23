#include <iostream>
#include <fstream>

using namespace std;
int main() 
{
    ofstream fout("60.txt") ;
    string name , college , branch ;
    cout << "Enter your name\n" ;
    getline (cin , name) ;
    cout << "Enter your college\n" ;   
    getline (cin , college) ;
    cout << "Enter your branch\n" ;
    getline (cin , branch) ;
    fout << name << " is my name\n" 
         << college << " is my college\n" 
         << branch << " is my branch\n" ;
    fout.close() ;
    ifstream in("60.txt") ;
    string st2 ;
    cout << "The content of the file MYDOC is :\n" ;
   while ( getline (in , st2) )
   {
      cout << st2 << "\n";
   }
    return 0;
}