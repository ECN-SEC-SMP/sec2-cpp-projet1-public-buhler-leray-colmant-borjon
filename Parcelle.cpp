#include "Parcelle.hpp"
#include <stdlib.h>

Parcelle::Parcelle(int num, std::string prop, Polygone<int> forme, int constructible) {
    this->num = num;
    this->proprietaire = prop;
    this->forme = forme;
    this->surface_constructible = constructible;
    int surface = 0;
    for(auto it = std::begin(forme.getSommets()); it != std::end(forme.getSommets()) - 1; ++it) {
        surface += (*it.getX()) * (*(it+1).getY()) - (*(it + 1).getX()) * (*it.getY());
    }
    this->surface = surface / 2;
}

Parcelle::Parcelle(Parcelle& parc) {
    this->num = parc.getNumero();
    this->proprietaire = parc.getProprietaire();
    this->forme = parc.getForme();
    this->surface_constructible = parc.getSurfaceConstructible();
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

void Parcelle::setPropriétaire(string prop) {
    this->proprietaire = prop;
}

void Parcelle::setForme(Polygone<int> forme) {
    this-> forme = forme;
}

int Parcelle::getSurfaceConstructible() {
    return this->surface_constructible;
}

void Parcelle::setSurfaceConstructible(int surface) {
    this->surface_constructible = surface;
}