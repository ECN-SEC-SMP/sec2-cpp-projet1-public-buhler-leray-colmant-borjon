#ifndef Parcelle_H
#define Parcelle_H

#include <iostream>

#include "Polygone.hpp"

using namespace std;

class Parcelle{

    protected : 

        string type;
        int  num;
        string proprietaire;
        int surface;
        Polygone<int> forme;

    public : 

        Parcelle(int num, string prop,  Polygone<int> forme);
        Parcelle(Parcelle const& p);
        int getNumero() const;
        string getProprietaire() const;
        float getSurface() const;
        Polygone<int> getForme() const;
        void setNumero(int n);
        int getNumero();
        
        void setProprietaire(string prop );
        void setForme(Polygone<int> forme);
        virtual string getType() const = 0;

        friend std::ostream& operator<< (std::ostream &, Parcelle  const&);

    private :

        void calculate_surface();

};

Parcelle::Parcelle(int num, std::string prop, Polygone<int> forme) {
    this->num = num;
    this->proprietaire = prop;
    this->forme = forme;
    this->calculate_surface();
}

Parcelle::Parcelle(Parcelle const& parc) {
    this->num = parc.getNumero();
    this->proprietaire = parc.getProprietaire();
    this->forme = parc.getForme();
    this->surface = parc.getSurface();
}

int Parcelle::getNumero() const {
    return this->num;
}

std::string Parcelle::getProprietaire() const {
    return this->proprietaire;
}

float Parcelle::getSurface() const {
    return this->surface;
}

Polygone<int> Parcelle::getForme() const {
    return this->forme;
}

void Parcelle::setNumero(int n) {
    this->num = n;
}

void Parcelle::setProprietaire(string prop) {
    this->proprietaire = prop;
}

void Parcelle::setForme(Polygone<int> forme) {
    this-> forme = forme;
}

void Parcelle::calculate_surface() {
    int surface = 0;

    std::size_t i = 0;
    for(i; i < forme.getSommets().size() - 1 ; ++i) {
        surface += (forme.getSommets()[i]->getX() * forme.getSommets()[i+1]->getY()) - (forme.getSommets()[i+1]->getX() * forme.getSommets()[i]->getY());
    }
    surface += (forme.getSommets()[i]->getX() * forme.getSommets()[0]->getY()) - (forme.getSommets()[0]->getX() * forme.getSommets()[i]->getY());
    this->surface = surface / 2;
}

#endif