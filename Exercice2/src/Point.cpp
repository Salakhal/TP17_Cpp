#include <iostream>
#include "Point.h"

using namespace std;

Point::Point() : x(0), y(0) {}
Point::Point(double _x, double _y) : x(_x), y(_y) {}

double Point::getX() const { return x; }
double Point::getY() const { return y; }

void Point::afficher() const {
    cout << "(" << x << ", " << y << ")";
}
