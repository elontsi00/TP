#include "vehicule.h"
#include <iostream>
#include <string>


void Vehicule::rouler(float kil) 
{
    kilometra_ += kil;
    std::cout << "Le vehicule a roulé " << kil << " km." << std::endl;
}
std::string Vehicule::getMarque() const 
{
    return marque_;
}
std::string Vehicule::getModele() const 
{
    return modele_;
}
int Vehicule::getAnnee() const 
{
    return annee_;
}
float Vehicule::getKilometra() const 
{
    return kilometra_;
}

void Vehicule::afficherinfos() const
{
    std::cout << "Marque: " << getMarque() << ", Modele: " << getModele() << ", Annee: " << getAnnee() << ", Kilometrage: " << getKilometra() << " km";
}

Vehicule::~Vehicule(){}
 std::ostream& operator<<(std::ostream& os, const Vehicule& vehicule) {
     vehicule.afficherinfos();
        return os;
}