#include <iostream>
#include <cmath>
using namespace std;

class shape
{

public:
   virtual void area(void)
    {
        cout << "This is the display function of base class" << endl;
    }
};
class circle : public shape
{
    float radius;

public:
    circle(float r) : radius(r) {}
    void area()
    {
        cout << "Area of circle is " << M_PI * radius * radius << endl;
    }
};
class rectangle : public shape
{
    float length, width;

public:
    rectangle(float l, float w) : length(l), width(w) {}
    void area(void)
    {

        cout << "Area of rectangle is " << length * width << endl;
    }
};

int main()
{
    float length , width , radius;
    length = 40.0;
    width = 37.2;
    radius = 8.9;
    circle c1(radius);
    rectangle r1(length , width);
    shape *ptr[2];
    ptr[0] = &c1;
    ptr[1] = &r1;
    ptr[0]->area();
    ptr[1]->area();


    return 0;
}