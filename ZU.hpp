#include "Constructible.hpp"

class ZU : public Constructible {
    public:
        ZU(int num, string prop, Polygone<int> forme, int surface_constructible, int surface_construite);
        int surfaceConstructible() const;
        std::string getType() const;
        friend ostream& operator<< (ostream &, ZU const &);
};

ZU::ZU(int num, string prop, Polygone<int> forme, int surface_constructible,  int surface_construite) : Constructible(num, prop, forme, surface_constructible) {
    this->surface_construite = surface_construite;
}

int ZU::surfaceConstructible() const {
    return this->surface * this->surface_constructible / 100 - surface_construite;
}

std::string ZU::getType() const {
    return "ZU";
}

ostream& operator<< (ostream &o, ZU const &z) {
    o << "Parcelle n°" << z.getNumero() << " :" << endl;
    o << "      " << "Type : " << z.getType() << endl;
    o << "      " << z.getForme() << endl;
    o << "      " << "Propriétaire : " << z.getProprietaire() << endl;
    o << "      " << "Surface : " << z.getSurface() << endl;
    o << "      " << "Surface constructible : " << z.getSurfaceConstructible() << " %" << endl;
    o << "      " << "Surface construite : " << z.getSurfaceConstruite() << endl;
    o << "      " << "Surface à construire restante : " << z.surfaceConstructible() << endl;
    return o;
}