// PRG1_E
//---------------------------------------------------------------------------------
// Fichier        : main.cpp
// Auteur(s)      : Vasques Dario et Urs Behrmann
// But            : Calculer l'addition d'un repas.
// Modifications  :
// Remarque(s)    : NILL
// Compilateur    : MinGW w64 9.0 / C++20
//---------------------------------------------------------------------------------

#include <iostream>     // Gestion des I/O
#include <cmath>        // Gestion des fonctions d'arrondi
#include <stdlib.h>     // Return Success
#include <iomanip>      // Setprecision

#define MESSAGE_ERREUR cout << endl << "Valeur hors limite. Pressez ENTER pour quitter"
#define VIDE_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

using namespace std;    // Simplification std::cin <=> cin ; std::cout <=> cin

int main() {
    //Programme

    // Variables constants pour formater le text
    const int LARGEUR_TEXT      = 20;
    const int LARGEUR_VALEUR    = 8;
    const int LARGEUR_NBRE      = 2;
    const int PRECISION         = 2;

    // Variables constants pour stocker les prix
    const float PRIX_ENTREE     =  4.50f;
    const float PRIX_PLAT       = 12.50f;
    const float PRIX_BOISSON    =  3.00f;
    const float PRIX_DESSERT    =  6.00f;
    const float PRIX_CAFE       =  2.80f;

    // Variable de saisies
    int nbreEntree;
    int nbrePlat;
    int nbreBoisson;
    int nbreDessert;
    int nbreCafe;


    // Fixe la précision des chiffres des cout.
    cout << fixed << setprecision(PRECISION);

    // Message d'introduction du programme
    cout << "bonjour, ce programme ..." << endl
         << "voici le prix des elements" << endl
         << "=========================" << endl
         << left << setw(LARGEUR_TEXT) << "- entree" << ':'
         << right << setw(LARGEUR_VALEUR) << PRIX_ENTREE << endl
         << left << setw(LARGEUR_TEXT) << "- plat" << ':'
         << right << setw(LARGEUR_VALEUR) << PRIX_PLAT << endl
         << left << setw(LARGEUR_TEXT) << "- boisson" << ':'
         << right << setw(LARGEUR_VALEUR) << PRIX_BOISSON << endl
         << left << setw(LARGEUR_TEXT) << "- dessert" << ':'
         << right << setw(LARGEUR_VALEUR) << PRIX_DESSERT << endl
         << left << setw(LARGEUR_TEXT) << "- cafe" << ':'
         << right << setw(LARGEUR_VALEUR) << PRIX_CAFE << endl
         << "NB : limite de saisie [0 - 10]" << endl << endl;


    // Entrée des données
    cout << "votre commande" << endl
         << "==============" << endl
         << left << setw(LARGEUR_TEXT) << "- nbre d'entree" << ':';
    cin >> nbreEntree;
    VIDE_BUFFER;

    // Test de la saisie afin de savoir si elle appartient à l'intervale
    if (nbreEntree > 10 || nbreEntree < 0) {
        MESSAGE_ERREUR;
        VIDE_BUFFER;
        return EXIT_FAILURE;
    }


    cout << left << setw(LARGEUR_TEXT) << "- nbre de plat" << ':';
    cin >> nbrePlat;
    VIDE_BUFFER;

    if (nbrePlat > 10 || nbrePlat < 0) {
        MESSAGE_ERREUR;
        VIDE_BUFFER;
        return EXIT_FAILURE;
    }


    cout << left << setw(LARGEUR_TEXT) << "- nbre de boisson" << ':';
    cin >> nbreBoisson;
    VIDE_BUFFER;

    if (nbreBoisson > 10 || nbreBoisson < 0) {
        MESSAGE_ERREUR;
        VIDE_BUFFER;
        return EXIT_FAILURE;
    }


    cout << left << setw(LARGEUR_TEXT) << "- nbre de dessert" << ':';
    cin >> nbreDessert;
    VIDE_BUFFER;

    if (nbreDessert > 10 || nbreDessert < 0) {
        MESSAGE_ERREUR;
        VIDE_BUFFER;
        return EXIT_FAILURE;
    }


    cout << left << setw(LARGEUR_TEXT) << "- nbre de cafe" << ':';
    cin >> nbreCafe;
    VIDE_BUFFER;

    if (nbreCafe > 10 || nbreCafe < 0) {
        MESSAGE_ERREUR;
        VIDE_BUFFER;
        return EXIT_FAILURE;
    }


    // Variables des totaux et calcul des totaux
    float totalEntrees  = (float)nbreEntree * PRIX_ENTREE;
    float totalPlat     = (float)nbrePlat * PRIX_PLAT;
    float totalBoisson  = (float)nbreBoisson * PRIX_BOISSON;
    float totalDessert  = (float)nbreDessert * PRIX_DESSERT;
    float totalCafe     = (float)nbreCafe * PRIX_CAFE;
    float total         = totalEntrees + totalPlat + totalBoisson + totalDessert + totalCafe;


    // Impression du Ticket
    cout << endl << "votre ticket" << endl
         << "===========" << endl
         << "- "
         << right << setw(LARGEUR_NBRE) << nbreEntree
         << left << setw(LARGEUR_TEXT) << " entrees" << ':'
         << right << setw(LARGEUR_VALEUR) << totalEntrees << endl
         << "- "
         << right << setw(LARGEUR_NBRE) << nbrePlat
         << left << setw(LARGEUR_TEXT) << " plats" << ':'
         << right << setw(LARGEUR_VALEUR) << totalPlat << endl
         << "- "
         << right << setw(LARGEUR_NBRE) << nbreBoisson
         << left << setw(LARGEUR_TEXT) << " boissons" << ':'
         << right << setw(LARGEUR_VALEUR) << totalBoisson << endl
         << "- "
         << right << setw(LARGEUR_NBRE) << nbreDessert
         << left << setw(LARGEUR_TEXT) << " desserts" << ':'
         << right << setw(LARGEUR_VALEUR) << totalDessert << endl
         << "- "
         << right << setw(LARGEUR_NBRE) << nbreCafe
         << left << setw(LARGEUR_TEXT) << " cafes" << ':'
         << right << setw(LARGEUR_VALEUR) << totalCafe << endl
         << "- "
         << right << setw(LARGEUR_NBRE + LARGEUR_TEXT) << " TOTAL" << ':'
         << right << setw(LARGEUR_VALEUR) << total << endl
         << "merci de votre visite" << endl << endl;


    //Fin de programme
    cout << "Pressez ENTER pour quitter";
    VIDE_BUFFER;
    return EXIT_SUCCESS;
}