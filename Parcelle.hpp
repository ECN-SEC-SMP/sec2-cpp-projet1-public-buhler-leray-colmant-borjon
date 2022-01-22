#include <string>
#include "Polygone.hpp"

class Parcelle {
    protected :
        std::string type;
        int num;
        std::string proprietaire;
        float surface;
        Polygone<int> forme;
        int surface_constructible;

    public :
        Parcelle(int num, std::string prop, Polygone<int> forme, int constructible);
        Parcelle(Parcelle& parc);
        int getNumero() const;
        std::string getProprietaire() const;
        float getSurface() const;
        Polygone<int> getForme() const;
        virtual string getType() const = 0;
        void setNumero(int n);
        void setPropriétaire(string prop);
        void setForme(Polygone<int> forme);
        int getSurfaceConstructible();
        void setSurfaceConstructible(int surface);
};