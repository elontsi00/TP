#ifndef PARC_H
#define PARC_H
#include <vector>
#include "vehicule.h"
class Parc 
{
    private :
        std::vector<Vehicule*> vehicules_;
    public :
        void ajouterVehicule(Vehicule* v);
        void afficherParc() const;
        ~Parc();
};
#endif