#include "pointarray.h"
#include "point.h"
#include <iostream>
using namespace std;
PointArray::PointArray()
{
    size=0;
    points= new Point[0];
}

PointArray::PointArray(const Point pts[], const int sizes)
{
    size=sizes;
    points=new Point[size];
    for (int i = 0; i < size; ++i) {
       points[i]=pts[i];
    }
}

PointArray::PointArray(const PointArray &pv)
{
    size=pv.size;

    points= new Point[size];
    for (int i = 0; i < size; ++i) {
        points[i]=pv.points[i];
    }
}

PointArray::~PointArray()
{
    delete[] points;
}


void PointArray::resize(int sizes)
{
    Point *puntos=new Point[sizes];
    int minsize = (sizes>size?size:sizes);
    for (int i = 0; i < minsize; i++) {
        puntos[i]=points[i];
    }
    delete[] points;
    size = sizes;
    points=puntos;
}

void PointArray::clear()
{
    resize(0);
}

void PointArray::pushBack(const Point &p)
{
    resize(size+1);
    points[size-1]=p;
}

void PointArray::insert(const int pos, const Point &p)
{
    resize(size+1);
    for (int i = size-1; i > pos;i--) {
        points[i]=points[i-1];
    }
    points[pos]=p;
}

void PointArray::remove(const int pos)
{
    if(pos>=0 &&pos<size)
    {
        for (int i = pos; i < size-2; i++) {
            points[i]=points[i+1];

        }
        resize(size-1);
    }
}

Point *PointArray::get(const int pos)
{
    return pos>=0 && pos<size ? points+pos:NULL;
}

const Point *PointArray::get(const int pos) const
{
    return pos >=0 && pos <size ? points+pos:NULL;
}



