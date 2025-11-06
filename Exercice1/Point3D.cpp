#include <iostream>
#include "Point3D.h"

using namespace std;

// Constructeurs
Point3D::Point3D() : x(0), y(0), z(0) {}

Point3D::Point3D(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}

// Accesseurs
double Point3D::getX() const { return x; }
double Point3D::getY() const { return y; }
double Point3D::getZ() const { return z; }

// Affichage
void Point3D::afficher() const {
    cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}
