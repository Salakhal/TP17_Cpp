#include <cmath>
#include <iostream>
#include "Segment.h"

using namespace std;

Segment::Segment() : p1(), p2() {}
Segment::Segment(const Point& _p1, const Point& _p2) : p1(_p1), p2(_p2) {}

double Segment::longueur() const {
    double dx = p2.getX() - p1.getX();
    double dy = p2.getY() - p1.getY();
    return sqrt(dx*dx + dy*dy);
}

void Segment::afficher() const {
    cout << "Segment: "; p1.afficher(); cout << " - "; p2.afficher(); cout << endl;
}
