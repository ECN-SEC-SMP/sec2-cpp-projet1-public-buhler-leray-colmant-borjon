#include "Parcelle.hpp"

class ZN : public Parcelle {
    public:
        ZN(int num, string prop, Polygone<int> forme);
        std::string getType() const;
        friend ostream& operator<< (ostream &, ZN const &);
};

ZN::ZN(int num, string prop, Polygone<int> forme) : Parcelle(num, prop, forme) {
}

std::string ZN::getType() const {
    return "ZN";
}

ostream& operator<< (ostream &o, ZN const &z) {
    o << "Parcelle n°" << z.getNumero() << " :" << endl;
    o << "      " << "Type : " << z.getType() << endl;
    o << "      " << z.getForme() << endl;
    o << "      " << "Propriétaire : " << z.getProprietaire() << endl;
    o << "      " << "Surface : " << z.getSurface() << endl;
    return o;
}