#include "point.h"
#include <iostream>
using namespace std;
Point::Point():x(0),y(0){}

Point::Point(int xx, int yy):x(xx),y(yy){};
int Point::getX()
{
    return x;
}
int Point::getY()
{
    return y;
}
void Point::setX(const int x)
{
    this->x=x;

}
void Point::setY(const int y)
{
    this->y=y;
}

void Point::print()
{
    cout << "(" << getX() << "," << getY() << ")"<< endl;
}
