#include "vectorarray.h"
#include "point.h"
#include "pointarray.h"
vectorarray::vectorarray()
    :init(0,0),final(0,0)
{

}

vectorarray::vectorarray(int x, int y, int xx, int yy)
    :init(x,y),final(xx,yy)
{

}

Point vectorarray::getInit()
{
    return init;
}

Point vectorarray::getFinal()
{
    return final;
}

void vectorarray::setInit(int x, int y)
{
    this->init.setX(x);
    this->init.setY(y);
}

void vectorarray::setFinal(int x, int y)
{
    this->final.setX(x);
    this->final.setY(y);
}
