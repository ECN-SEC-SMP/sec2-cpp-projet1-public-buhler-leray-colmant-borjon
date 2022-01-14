#include <iostream>
#pragma once
using namespace std;

template <typename T>
class Point2D;

template <typename T>
ostream& operator<<(ostream&, Point2D<T> const &);

template <typename T>
class Point2D {
    protected:
        T x;
        T y;

    public:
        Point2D(const T& x, const T& y);
        Point2D(const Point2D & p);
        void translater(const T& x, const T& y);
        void translater(const string& x, const string& y);
        T getX() const;
        T getY() const;
        void setX(const T& x);
        void setY(const T& y);
        friend ostream& operator<< <T>(ostream&, Point2D<T> const &);
};

template <typename T>
Point2D<T>::Point2D(const T& x, const T& y) {
    this->x = x;
    this->y = y;
}

template <typename T>
Point2D<T>::Point2D(const Point2D& p) {
    this->x = p.getX();
    this->y = p.getY();
}

template <typename T>
void Point2D<T>::translater(const T& x, const T& y) {
    this->x += x;
    this->y += y;
}

// template <>
// void PointTemplate<string>::translater(const string& x, const string& y) {
//     this->x += stoi(x);
//     this->y += stoi(y);
// }   


template <typename T>
T Point2D<T>::getX() const {
    return this->x;
}

template <typename T>
T Point2D<T>::getY() const {
    return this->y;
}

template <typename T>
void Point2D<T>::setX(const T& x) {
    this->x = x;
}

template <typename T>
void Point2D<T>::setY(const T& y) {
    this->y = y;
}

template <typename T>
ostream& operator<<(ostream& os, Point2D<T> const &p)
{
    os << "x : " << p.getX() << ", y : " << p.getY() << endl;
    return os;
}