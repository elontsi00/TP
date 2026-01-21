#include "camion.h"
#include <iostream>
void Camion::afficherinfos() const 
{
    Vehicule::afficherinfos();
    std::cout << ", Capacite de charge: " << capaciteCharge_ << " tonnes" << std::endl;
}
float Camion::getCapaciteCharge() const 
{
    return capaciteCharge_;
}
Camion::~Camion() {}
