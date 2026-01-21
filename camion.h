#ifndef CAMION_H
#define CAMION_H
#include "vehicule.h"
#include <string>
class Camion : public Vehicule 
{
    private :
        float capaciteCharge_;
    public :
        Camion(const std::string& marque,const std::string& modele, int ann, float kilom, float capaciteCharge)
        : Vehicule(marque, modele, ann, kilom), capaciteCharge_(capaciteCharge) {}
        
        void afficherinfos() const override;
        
        float getCapaciteCharge() const;
        
        ~Camion();
};
#endif