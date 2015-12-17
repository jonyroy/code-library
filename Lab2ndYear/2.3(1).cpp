/*
2.3(1):
problem:
Given the following base class,
class area_cl{
public:
double height;
double width;
};
create two derived classes called rectangle and isosceles that inherit area_cl.
Have each class include a function called area() that returns the area of a rectangle
or isosceles triangle, as appropriate. Use parameterized constructors to initialize height and width.
*/
#include<iostream>
using namespace std;
class area_cl{
public:
    double height;
    double width;
};
class rectangle: public area_cl
{
public:
    rectangle(double h,double w);
    double area();
};
class isosceles : public area_cl
{
public:
    isosceles(double h,double w);
    double area();
};
rectangle :: rectangle(double h,double w)
{
    height=h;
    width=w;
}
isosceles :: isosceles(double h,double w)
{
    height=h;
    width=w;
}
double rectangle :: area()
{
    return width * height;
}
double isosceles :: area()
{
    return 0.5*width*height;
}
int main()
{
    rectangle b(10.0,5.0);
    isosceles i(4.0,6.0);
    cout<<"Rectangle: "<<b.area()<<"\n";
    cout<<"Triangle: "<<i.area()<<"\n";
    return 0;
}
