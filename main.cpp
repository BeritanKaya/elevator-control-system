#include <iostream>     // Pour afficher du texte avec cout
#include "asc.h"  // Inclusion de la définition de la classe Ascenseur

using namespace std;    // Pour éviter d’écrire std:: devant cout, endl, etc.

int main() {
    // Création d’un ascenseur numéro 1, pouvant circuler entre 1 et 15
    Ascenseur asc1(1, 15);

    // Simulation de différents appels de l’ascenseur
    asc1.demande_ascenseur(5);   // L’ascenseur doit monter du 1 au 5
    asc1.demande_ascenseur(12);  // Puis monter du 5 au 12
    asc1.demande_ascenseur(3);   // Ensuite descendre du 12 au 3
    asc1.demande_ascenseur(15);  // Monter du 3 au 15
    asc1.demande_ascenseur(0);   // Test d’erreur : étage inexistant

    return 0; // Fin du programme
}
