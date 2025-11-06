#include <iostream>
#include "Triangle.h"
#include "Segment.h"

using namespace std;

Triangle::Triangle() : a(), b(), c() {}
Triangle::Triangle(const Point& _a, const Point& _b, const Point& _c) : a(_a), b(_b), c(_c) {}

double Triangle::perimetre() const {
    Segment s1(a, b);
    Segment s2(b, c);
    Segment s3(c, a);
    return s1.longueur() + s2.longueur() + s3.longueur();
}

void Triangle::afficher() const {
    cout << "Triangle: "; a.afficher(); cout << ", "; b.afficher(); cout << ", "; c.afficher(); cout << endl;
}
