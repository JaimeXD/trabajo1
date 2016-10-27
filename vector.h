#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include <iostream>
#include "punto.h"
using namespace std;

class Vector{
public:
    Point start;
    Point end1;
    void suma(double sumax,double sumay);
    void printf();
    double getstart();
    double getend();
    void setstart(double xya);
    void setend(double xye);
};



#endif // VECTOR_H_INCLUDED
