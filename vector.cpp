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
