#ifndef VOITURE_H
#define VOITURE_H
#include "vehicule.h"
#include <string>
class Voiture : public Vehicule 
{
    private :
        int nbPortes_;
    public :
        Voiture(const std::string& marque,const std::string& modele, int ann, float kilom, int nbPortes)
        : Vehicule(marque, modele, ann, kilom), nbPortes_(nbPortes) {}
        
        void afficherinfos() const override;
        
        int getNbPortes() const;
        
        ~Voiture();
};
#endif