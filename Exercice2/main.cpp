#include <iostream>
#include "Point.h"
#include "Segment.h"
#include "Triangle.h"

using namespace std;

int main() {
    Point p1(0, 0), p2(3, 0), p3(0, 4);

    Triangle t(p1, p2, p3);
    t.afficher();
    cout << "Perimetre: " << t.perimetre() << endl;

    return 0;
}
