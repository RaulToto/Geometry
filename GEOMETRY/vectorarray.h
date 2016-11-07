#ifndef VECTORARRAY_H
#define VECTORARRAY_H
#include "point.h"
#include "pointarray.h"
class vectorarray:public PointArray
{
public:
    //default constructor
    vectorarray();
    //init x,y
    vectorarray(int,int,int,int);
    //copy constructor
    vectorarray(const vectorarray &);
    //getters and setters
    Point getInit();
    Point getFinal();
    void setInit(int,int);
    void setFinal(int,int);
    //crete array of vectors

private:
    Point init;
    Point final;
};

#endif // VECTORARRAY_H

