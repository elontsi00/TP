#ifndef VEHICULE_H
#define VEHICULE_H

#include <iostream>
#include <string>

class Vehicule 
{
    protected :
        std::string marque_;
        std::string modele_;
        int annee_;
        float kilometra_;

    public :

        Vehicule(const std::string& marque,const std::string& modele, int ann, float kilom): marque_(marque),modele_(modele),annee_(ann),kilometra_(kilom){}
        std::string getMarque() const;
        std::string getModele() const;
        int getAnnee() const;
        float getKilometra() const;
        virtual void afficherinfos() const ;
         void rouler(float kil) ;
         friend std::ostream& operator<<(std::ostream& os, const Vehicule& vehicule);
    
        virtual ~Vehicule();
        
};
#endif 
