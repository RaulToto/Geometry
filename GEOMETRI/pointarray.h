#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "point.h"
class PointArray
{
public:
    PointArray();
    PointArray(const Point[] ,int ); //inicializar point array con su tamaño
    PointArray(const PointArray&);//copia de point array
    ~PointArray();//destructor point array

    //member functions
    void clear();
    int getsize()const
    {
        return size;
    }
    void pushBack(const Point &);
    void insert(const int ,const Point &);
    void remove(const int );
    Point *get(const int );
    const Point *get(const int )const;
private:
    int size;
    Point *points;
    void resize(int size);

};
#endif // POINTARRAY_H
