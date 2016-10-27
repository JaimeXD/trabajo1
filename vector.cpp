#include <iostream>
#include "vector.h"
using namespace std;

void Vector::suma(double sumax,double sumay){
    start.suma(sumax,sumay);
    end1.suma(sumax,sumay);
}
void Vector::printf(){
    start.printf();
    cout<<"->";
    end1.printf();
    cout<<endl;
}
double Vector::getstart(){
    return start;
}
double Vector::getend(){
    return end1;
}
void Vector::setstart(double x,double y){
    start.x=x;
    start.y=y;
}
void Vector::setend(double x,double y){
    end1.x=x;
    end1.y=y;
}
