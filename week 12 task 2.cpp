//BCS-05-0070/2025   JOSHUA LILA
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double calculateArea() = 0;
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    double calculateArea()
    {
        return 3.142 * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double calculateArea()
    {
        return length * width;
    }
};

int main()
{
    Shape *shape;

    Circle c(7);
    Rectangle r(8, 5);

    shape = &c;
    cout << "Area of Circle: " << shape->calculateArea() << endl;

    shape = &r;
    cout << "Area of Rectangle: " << shape->calculateArea() << endl;

    return 0;
}
