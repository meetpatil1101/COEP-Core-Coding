#include <iostream>
using namespace std;
class shopItem 
{ 
    int Id ;
    float price ;
    
public :
    
};


int main()
{
    int price , Id ;
    int size = 3;
    shopItem *ptr = new shopItem [size];
    shopItem *ptrtemp = ptr ;
    for (int i = 0; i < size; i++)
    {
        
        cout << "Enter the Id of item" <<endl ;
        cin >> Id  ;
        cout << "Enter the price of item" <<endl ;
        cin >> price  ;
        ptr ++ ;
    }
    for ( int j = 0; j < size; j++)
    {
        cout << "Item Number" << j+1 <<endl ;
        ptrtemp++ ;
    }
    
    return 0;
}