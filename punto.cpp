#include <iostream>
#include "punto.h"
using namespace std;

void Point::suma(double sumax,double sumay){
    x+=sumax;y+=sumay;
}
void Point::printf(){
    cout<<"("<<x<<"."<<y<<")";
}
double Point::getx(){
    return x;
}
double Point::gety(){
    return y;
}
