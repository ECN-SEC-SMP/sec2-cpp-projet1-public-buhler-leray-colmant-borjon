#include "Point2D.hpp"

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
    protected:
        

    public:
        Polygone();
        Polygone(vector <Point2D<T>> listeSommets);
        Polygone (Polygone <T, D> poly);

};