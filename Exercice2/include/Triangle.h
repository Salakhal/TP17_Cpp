#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"
#include "Segment.h"

class Triangle {
private:
    Point a, b, c;

public:
    Triangle();
    Triangle(const Point& _a, const Point& _b, const Point& _c);

    double perimetre() const;
    void afficher() const;
};

#endif // TRIANGLE_H
