#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include <iostream>
#include "punto.h"
using namespace std;

class Vector{
private:
    Point start;
    Point end1;
public:
    void suma(double sumax,double sumay);
    void printf();
    double getstart();
    double getend();
    void setstart(double xya);
    void setend(double xye);
};



#endif // VECTOR_H_INCLUDED
