#include <iostream>     // Inclusion pour afficher du texte avec cout
#include "asc.h"  // Inclusion du fichier header de la classe Ascenseur

using namespace std;    // Pour éviter d’écrire std:: devant cout, endl, etc.

// Constructeur : initialise un ascenseur avec un numéro et un dernier étage
Ascenseur::Ascenseur(int numero, int dernierEtage) {
    Num_Asc = numero;         // On stocke le numéro de l'ascenseur
    der_etage = dernierEtage; // On fixe le dernier étage de l’immeuble
    etage_act = 1;            // Par défaut, l’ascenseur commence au 1er étage
}

// Méthode qui simule une demande d’appel de l’ascenseur
void Ascenseur::demande_ascenseur(int etage_demande) {
    // Vérification : si l'étage demandé est hors limites (en dessous de 1 ou au-dessus du dernier étage)
    if (etage_demande < 1 || etage_demande > der_etage) {
        cout << "Erreur : l'étage demandé n'existe pas (1-" << der_etage << ")." << endl;
        return;  // On arrête la méthode car la demande est invalide
    }

    // Message d’information : affichage de l’appel en cours
    cout << "Ascenseur #" << Num_Asc 
         << " appelé depuis l'étage actuel " << etage_act 
         << " vers l'étage " << etage_demande << endl;

    // Cas 1 : l’étage demandé est plus haut que l’étage actuel → déplacement vers le haut
    if (etage_demande > etage_act) {
        // Boucle qui simule le passage par chaque étage jusqu’à la destination
        for (int i = etage_act + 1; i <= etage_demande; i++) {
            cout << "Ascenseur #" << Num_Asc << " -> étage " << i << endl;
        }
    } 
    // Cas 2 : l’étage demandé est plus bas que l’étage actuel → déplacement vers le bas
    else if (etage_demande < etage_act) {
        // Boucle qui simule la descente étage par étage
        for (int i = etage_act - 1; i >= etage_demande; i--) {
            cout << "Ascenseur #" << Num_Asc << " -> étage " << i << endl;
        }
    } 
    // Cas 3 : l’ascenseur est déjà à l’étage demandé
    else {
        cout << "Ascenseur #" << Num_Asc << " est déjà à l'étage " << etage_act << endl;
    }

    // Mise à jour de l'étage actuel après le déplacement
    etage_act = etage_demande;
}
