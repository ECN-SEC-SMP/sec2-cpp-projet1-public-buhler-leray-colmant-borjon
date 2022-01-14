#include "Point2D.hpp"
#pragma once
using namespace std;

template <typename T,S>
class Polygone;

template <typename T,S>
ostream& operator<<(ostream&, Polygone<T,S> const &);
/*
- sommets : Vector<Point2D<T>>
+ Polygone( )
+ Polygone(Vector<Point2D<T>> listeSommets)
+ Polygone(Polygone<T, S> poly)
+ getSommets( ) : Vector<Point2D<T>>
+ setSommets(Vector<Point2D<T>> listeSommets) : void + addPoint(Point2D<T>) : void
+ translate(T x, T y) : void
*/

template <typename T>
class Polygone {
    private:
        vector

    public:
        Polygone();
        Polygone(vector <Point2D<T>> listeSommets);
        Polygone (Polygone <T, D> poly);

};