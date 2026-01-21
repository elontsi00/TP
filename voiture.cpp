#include "voiture.h"
#include <iostream>
void Voiture::afficherinfos()const 
{
    Vehicule::afficherinfos();
    std::cout << "Nombre de portes: " << nbPortes_ << std::endl;
}
int Voiture::getNbPortes() const 
{
    return nbPortes_;
}
Voiture::~Voiture(){}
