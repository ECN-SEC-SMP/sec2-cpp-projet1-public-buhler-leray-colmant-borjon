#include "Polygone.hpp"


int main() {
    Point2D<int> p1 = Point2D<int> (2,5);
    Point2D<int> p2 = Point2D<int> (6,5);
    Point2D<int> p3 = Point2D<int> (1,9);

    vector<Point2D<int>*> vectSommets;
    vectSommets.push_back(&p1);
    vectSommets.push_back(&p2);
    vectSommets.push_back(&p3);

    Polygone<int> poly1 = Polygone<int> (vectSommets);

    //cout << poly1 <<endl;
    
    return 0;
}