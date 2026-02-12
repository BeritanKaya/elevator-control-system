#ifndef ASC_H   // Directive pour éviter les inclusions multiples du fichier
#define ASC_H   // Définit ASCENSEUR_H si ce n'est pas déjà fait

// Définition de la classe Ascenseur
class Ascenseur {
private:
    int Num_Asc;      // Numéro de l'ascenseur (permet de distinguer plusieurs ascenseurs)
    int etage_act;    // Étage actuel de l'ascenseur
    int der_etage;    // Dernier étage possible dans l'immeuble (exemple : 15)

public:
    // Constructeur de la classe Ascenseur
    Ascenseur(int numero, int dernierEtage);

    // Méthode qui permet de demander à l'ascenseur d'aller à un étage donné
    void demande_ascenseur(int etage_demande);
};

#endif  // Fin de la directive ASCENSEUR_H
