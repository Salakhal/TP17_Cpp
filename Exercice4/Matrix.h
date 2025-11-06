#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <array>
#include <iomanip>

template<typename T, size_t N, size_t M>
class Matrix {
private:
    std::array<std::array<T, M>, N> data{};
public:
    // Constructeur par défaut
    Matrix() {
        for (size_t i = 0; i < N; ++i)
            for (size_t j = 0; j < M; ++j)
                data[i][j] = T();
    }

    // Accès aux éléments
    T& at(size_t i, size_t j) {
        return data[i][j];
    }

    const T& at(size_t i, size_t j) const {
        return data[i][j];
    }

    // Opérateur +
    Matrix<T,N,M> operator+(const Matrix<T,N,M>& other) const {
        Matrix<T,N,M> result;
        for (size_t i = 0; i < N; ++i)
            for (size_t j = 0; j < M; ++j)
                result.at(i,j) = this->at(i,j) + other.at(i,j);
        return result;
    }

    // Opérateur * (multiplication élément par élément)
    Matrix<T,N,M> operator*(const Matrix<T,N,M>& other) const {
        Matrix<T,N,M> result;
        for (size_t i = 0; i < N; ++i)
            for (size_t j = 0; j < M; ++j)
                result.at(i,j) = this->at(i,j) * other.at(i,j);
        return result;
    }

    // Affichage
    friend std::ostream& operator<<(std::ostream& os, const Matrix<T,N,M>& mat) {
        for (size_t i = 0; i < N; ++i) {
            for (size_t j = 0; j < M; ++j)
                os << std::setw(5) << mat.at(i,j) << " ";
            os << "\n";
        }
        return os;
    }
};

#endif
