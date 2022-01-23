#include "Constructible.hpp"

class ZAU : public Constructible {
    public :
        ZAU(int num, string prop, Polygone<int> forme, int surface_constructible);
        int surfaceConstructible() const;
        std::string getType() const;
        friend ostream& operator<< (ostream &, ZAU const &);
};

ZAU::ZAU(int num, string prop, Polygone<int> forme, int surface_constructible) : Constructible(num, prop, forme, surface_constructible) {

}

int ZAU::surfaceConstructible() const {
    return this->surface_constructible;
}

std::string ZAU::getType() const {
    return "ZAU";
}

ostream& operator<< (ostream &o, ZAU const &z) {
    o << "Parcelle n°" << z.getNumero() << " :" << endl;
    o << "      " << "Type : " << z.getType() << endl;
    o << "      " << z.getForme() << endl;
    o << "      " << "Propriétaire : " << z.getProprietaire() << endl;
    o << "      " << "Surface : " << z.getSurface() << endl;
    o << "      " << "Surface constructible : " << z.getSurfaceConstructible() << " %" << endl;
    return o;
}