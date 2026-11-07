#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void area()
    {
        cout << "Area of Shape" << endl;
    }
};
class Rect : public Shape
{
    int length, breadth;
public:
    Rect(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void area()
    {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};
class Circle : public Shape
{
    float radius;
public:
    Circle(float r)
    {
        radius = r;
    }
    void area()
    {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};
int main()
{
    Shape *ptr;
    Rect r(10, 5);
    Circle c(7);
    ptr = &r;
    ptr->area();
    ptr = &c;
    ptr->area();
    return 0;
}
