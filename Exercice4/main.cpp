#include "Matrix.h"
#include <iostream>

int main() {
    // Matrice 2x2 d'entiers
    Matrix<int,2,2> A;
    Matrix<int,2,2> B;
    A.at(0,0) = 1; A.at(0,1) = 2;
    A.at(1,0) = 3; A.at(1,1) = 4;

    B.at(0,0) = 5; B.at(0,1) = 6;
    B.at(1,0) = 7; B.at(1,1) = 8;

    std::cout << "A + B =\n" << (A + B) << "\n";

    // Matrice 3x3 de doubles
    Matrix<double,3,3> C;
    Matrix<double,3,3> D;
    for (size_t i=0;i<3;i++)
        for (size_t j=0;j<3;j++) {
            C.at(i,j) = i + j + 0.5;
            D.at(i,j) = (i+1)*(j+1);
        }

    std::cout << "C * D =\n" << (C * D) << "\n";

    return 0;
}
