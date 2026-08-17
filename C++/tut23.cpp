#include <iostream>
using namespace std;
class shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter();
    void setPrice(int n);
    void displayPrice();
    int calculateTotal();
};

void shop::initcounter()
{
    counter = 0;
}

void shop::setPrice(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Id of item " << (i + 1) << endl;
        cin >> itemId[counter];
        cout << "Enter price of item " << (i + 1) << endl;
        cin >> itemPrice[counter];
        counter++;
    }
}

void shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The cost of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int shop::calculateTotal()
{
    int total = 0;
    for (int i = 0; i < counter; i++)
    {
        total += itemPrice[i];
    }
    return total;
}

int main()
{
    shop dukaan;
    int n;
    cout << "Enter number of items you want to buy " << endl;
    cin >> n;
    dukaan.initcounter();
    dukaan.setPrice(n);
    dukaan.displayPrice();
    cout << "Total amount = " << dukaan.calculateTotal() << "of 