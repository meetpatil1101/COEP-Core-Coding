#include <iostream>
#include <cmath>

class point
{
private:
    int x, y;
public:
    point() : x(0), y(0) {}
    point(int a, int b) : x(a), y(b) {}

    int getX() const { return x; }
    int getY() const { return y; }

    void Display() const
    {
        std::cout << "The point is : (" << x << " , " << y << ")" << std::endl;
    }
};
double distance(const point &p1, const point &p2)
{
    double dx = static_cast<double>(p2.getX() - p1.getX());
    double dy = static_cast<double>(p2.getY() - p1.getY());
    return std::hypot(dx, dy);
}
int main()
{
    int x1, y1, x2, y2;
    std::cout << "DISTANCE BETWEEN TWO POINTS" << std::endl;
    std::cout << "Enter the first x coordinate " << std::endl;
    std::cin >> x1;
    std::cout << "Enter the first y coordinate " << std::endl;
    std::cin >> y1;
    point p1(x1, y1);

    std::cout << "Enter the second x coordinate " << std::endl;
    std::cin >> x2;
    std::cout << "Enter the second y coordinate " << std::endl;
    std::cin >> y2;
    point p2(x2, y2);

    p1.Display();
    p2.Display();
    double d = distance(p1, p2);
    std::cout << "The distance between (" << p1.getX() << "," << p1.getY() << ") and (" << p2.getX() << "," << p2.getY() << ") is : " << d << std::endl;
    return 0;
}