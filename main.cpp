#include "Carte.hpp"


int main() {
    vector<Point2D<int>*> vect1;
    vect1.push_back(new Point2D<int> (80,0));
    vect1.push_back(new Point2D<int> (100,0));
    vect1.push_back(new Point2D<int> (100,100));
    vect1.push_back(new Point2D<int> (80,100));

    vector<Point2D<int>*> vect2;
    vect2.push_back(new Point2D<int> (0,30));
    vect2.push_back(new Point2D<int> (80,30));
    vect2.push_back(new Point2D<int> (80,100));
    vect2.push_back(new Point2D<int> (60,100));

    vector<Point2D<int>*> vect3;
    vect3.push_back(new Point2D<int> (0,30));
    vect3.push_back(new Point2D<int> (60,100));
    vect3.push_back(new Point2D<int> (0,100));

    vector<Point2D<int>*> vect4;
    vect4.push_back(new Point2D<int> (0,0));
    vect4.push_back(new Point2D<int> (80,0));
    vect4.push_back(new Point2D<int> (80,30));
    vect4.push_back(new Point2D<int> (0,30));

    ZU zu = ZU(43, "Nolann", Polygone<int> (vect3), 55, 500);
    ZAU zau = ZAU(14, "Michel", Polygone<int> (vect2), 5);
    ZN zn = ZN(67, "Louis", Polygone<int> (vect1));
    ZA za = ZA(92, "Killian", Polygone<int> (vect4), "Boulgour");

    cout << zu;
    cout << zau;
    cout << zn;
    cout << za;

    // Carte c = Carte();
    // c.lectureFichier();
    return 0;
}