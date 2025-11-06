#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x, y;

public:
    Point();                         // constructeur par défaut
    Point(double _x, double _y);     // constructeur paramétré

    double getX() const;
    double getY() const;

    void afficher() const;
};

#endif // POINT_H
