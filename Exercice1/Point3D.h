#ifndef POINT3D_H
#define POINT3D_H

class Point3D {
private:
    double x, y, z;

public:
    // Constructeurs
    Point3D();                   // constructeur par défaut
    Point3D(double _x, double _y, double _z); // constructeur avec paramètres

    // Accesseurs
    double getX() const;
    double getY() const;
    double getZ() const;

    // Méthode pour afficher le point (optionnel)
    void afficher() const;
};

#endif // POINT3D_H
