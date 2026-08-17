#include <iostream>
using namespace std;
class Zoo
{
private:
    int lion, tiger , leopard;

public:
    int cat , dog ;
    void setData(int lion, int tiger, int leopard);
    void getData()
    {
        cout << "The age of lion is : " << lion << endl;
        cout << "The age of tiger is : " << tiger << endl;
        cout << "The age of leopard is : " << leopard << endl;
        cout << "The age of cat is : " << cat << endl;
        cout << "The age of dog is : " << dog << endl;
    }
};
void Zoo ::setData(int lion, int tiger, int leopard)
{
    this->lion = lion;
    this->tiger = tiger;
    this->leopard = leopard;
}
int main()
{
    Zoo Animals;
    Animals.cat = 12;
    Animals.dog = 2;
    Animals.setData(8, 9, 10);
    Animals.getData();
    return 0;
}