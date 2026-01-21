#include "parc.h"
#include <iostream>
void Parc::ajouterVehicule(Vehicule* v) 
{
    vehicules_.push_back(v);
}
void Parc::afficherParc() const 
{
    for (const auto& vehicule : vehicules_) 
    {
        vehicule->afficherinfos();
    }
}
Parc::~Parc() 
{
    for (auto& vehicule : vehicules_) 
    {
        delete vehicule;
    }
}
   // vehicules_.clear();

