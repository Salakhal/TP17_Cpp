#ifndef SEGMENT_H
#define SEGMENT_H

#include "Point.h"

class Segment {
private:
    Point p1, p2;

public:
    Segment();
    Segment(const Point& _p1, const Point& _p2);

    double longueur() const;
    void afficher() const;
};

#endif // SEGMENT_H
