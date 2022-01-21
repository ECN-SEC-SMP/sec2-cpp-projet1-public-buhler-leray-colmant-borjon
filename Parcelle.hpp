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
        float surface;
        int surface_constructible;
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
        int getSurfaceConstructible() const;
        void setSurfaceConstructible(int surface);
        void setProprietaire(string prop );
        void setForme(Polygone<int> forme);
        virtual string getType() const = 0;

        friend std::ostream& operator<< (std::ostream &, Parcelle  const&);

    private :

    void calculate_surface();

};

#endif