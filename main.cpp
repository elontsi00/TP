#include <iostream>
#include "vehicule.h"
#include "voiture.h"
#include <string>
#include "camion.h"
#include "parc.h"
int main() 
{
   /* Vehicule v1("Toyota", "Corolla", 2015, 50000.0f);
    v1.afficherinfos();
    v1.rouler(150.0f);
    v1.afficherinfos();*/
    /*Voiture car1("Honda", "Civic", 2018, 30000.0f, 4);
    car1.afficherinfos();
    car1.rouler(200.0f);
    car1.afficherinfos();
    Camion truck1("Ford", "F-150", 2020, 40000.0f, 2.5f);
    truck1.afficherinfos();
    truck1.rouler(300.0f);
    truck1.afficherinfos();*/
    Parc parc;
    parc.ajouterVehicule(new Voiture("Honda", "Civic", 2018, 30000.0f, 4));
    parc.ajouterVehicule(new Camion("Ford", "F-150", 2020, 40000.0f, 2.5f));
    parc.afficherParc();


    return 0;
}