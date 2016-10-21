#include <iostream>
#include "punto.h"
#include "vector.h"
using namespace std;

int main()
{
    Point q(1.0,2.0);
    Point w(5.0,9.0);
    q.suma(2.0,3.0);
    q.printf();
    Point r=q;
    r.printf();
    Vector vec;
    vec.start=q;
    vec.end1=w;
    vec.suma(2.0,2.0);
    vec.printf();

}
