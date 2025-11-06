#include <iostream>
#include "Point3D.h"

using namespace std;

int main() {
    Point3D p1;               // constructeur par défaut
    Point3D p2(1.5, 2.5, 3.5); // constructeur avec paramètres

    cout << "Point 1 : "; p1.afficher();
    cout << "Point 2 : "; p2.afficher();

    return 0;
}
