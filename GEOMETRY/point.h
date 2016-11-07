#ifndef POINT_H
#define POINT_H
class Point
{
public:
    Point();
    Point(int,int);
    int getX();
    int getY();
    void setX(const int x);
    void setY(const int y);
    void print();
private:
    int x,y;
};
#endif // POINT_H
