#include "Constructible.hpp"

class ZA : public Constructible {
    public:
        std::string type_culture;
        ZA(int num, string prop, Polygone<int> forme, std::string type_culture);
        int surfaceConstructible() const;
        std::string getType() const;
        std::string getTypeCulture() const;
        friend ostream& operator<< (ostream &, ZA const &);
        int construire(int s);
};

ZA::ZA(int num, string prop, Polygone<int> forme, std::string type_culture) : Constructible(num, prop, forme, 10) {
    this->type_culture = type_culture;
}

std::string ZA::getType() const {
    return "ZA";
}

int ZA::surfaceConstructible() const {
    return this->surface * this->surface_constructible / 100 - surface_construite;
}

std::string ZA::getTypeCulture() const {
    return this->type_culture;
}

int ZA::construire(int s) {
    if (this->surface_construite + s < 200 && this->surface_construite * 100 / this->surface < 10) {
        this->surface_construite += s;
        return 0;
    } 
    return 1;
}

ostream& operator<< (ostream &o, ZA const &z) {
    o << "Parcelle n°" << z.getNumero() << " :" << endl;
    o << "      " << "Type : " << z.getType() << endl;
    o << "      " << z.getForme() << endl;
    o << "      " << "Propriétaire : " << z.getProprietaire() << endl;
    o << "      " << "Surface : " << z.getSurface() << endl;
    o << "      " << "Type de culture : " << z.getTypeCulture() << endl;
    return o;
}