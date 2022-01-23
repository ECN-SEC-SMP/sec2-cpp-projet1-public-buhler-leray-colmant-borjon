#ifndef Constructible_H
#define Constructible_H

#include "Parcelle.hpp"

class Constructible : public Parcelle {
    public:
        int surface_construite;
        int surface_constructible;

        Constructible(int num, string prop, Polygone<int> forme, int surface_constructible);
        virtual int surfaceConstructible() const=0;
        int getSurfaceConstruite() const;
        int getSurfaceConstructible() const;
};

Constructible::Constructible(int num, string prop, Polygone<int> forme, int surface_constructible) : Parcelle(num, prop, forme) {
    this->surface_constructible = surface_constructible;
}

int Constructible::getSurfaceConstruite() const {
    return this->surface_construite;
}

int Constructible::getSurfaceConstructible() const {
    return this->surface_constructible;
}

#endif
 
