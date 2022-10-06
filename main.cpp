// PRG1_E
//---------------------------------------------------------------------------------
// Demo           : XXXXXXXXXX
// Fichier        : main.cpp
// Auteur(s)      : Vasques Dario et Urs Behrmann
// But            : Calculer l'addition d'un repas.
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------------------------------

#include <iostream>     // Gestion des I/O
#include <cmath>        // Gestion des fonctions d'arrondi
#include <stdlib.h>     // Return Success
#include <iomanip>      // Setprecision

using namespace std;    // Simplification std::cin <=> cin ; std::cout <=> cin

int main() {
    //---------------------------------------------------------------------------------
    //Programme

    // Variables constants pour formater le text
    const int WIDTH_TEXT = 20;
    const int WIDTH_VALEUR = 8;
    const int WIDTH_NBRE = 2;

    // Variables constants pour
    const float PRIX_ENTREE     =  4.50f;
    const float PRIX_PLAT       = 12.50f;
    const float PRIX_BOISSON    =  3.00f;
    const float PRIX_DESSERT    =  6.00f;
    const float PRIX_CAFE       =  2.80f;

    int nbreEntree;
    int nbrePlat;
    int nbreBoisson;
    int nbreDessert;
    int nbreCafe;

    // Fixe la précision des chiffres des cout.
    cout << fixed << setprecision(2);

    // Message d'introduction du programme
    cout << "bonjour, ce programme ..." << endl
         << "voici le prix des elements" << endl
         << "=========================" << endl
         << left << setw(WIDTH_TEXT) << "- entree" << ':'
         << right << setw(WIDTH_VALEUR) << PRIX_ENTREE << endl
         << left << setw(WIDTH_TEXT) << "- plat" << ':'
         << right << setw(WIDTH_VALEUR) << PRIX_PLAT << endl
         << left << setw(WIDTH_TEXT) << "- boisson" << ':'
         << right << setw(WIDTH_VALEUR) << PRIX_BOISSON << endl
         << left << setw(WIDTH_TEXT) << "- dessert" << ':'
         << right << setw(WIDTH_VALEUR) << PRIX_DESSERT << endl
         << left << setw(WIDTH_TEXT) << "- cafe" << ':'
         << right << setw(WIDTH_VALEUR) << PRIX_CAFE << endl
         << "NB : limite de saisie [0 - 10]" << endl << endl;

    // Entrée des données
    cout << "votre commande" << endl
         << "==============" << endl
         << left << setw(WIDTH_TEXT) << "- nbre d'entree" << ':';
    cin >> nbreEntree;
    if (nbreEntree > 10 || nbreEntree < 0) return EXIT_FAILURE;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << left << setw(WIDTH_TEXT) << "- nbre de plat" << ':';
    cin >> nbrePlat;
    if (nbrePlat > 10 || nbrePlat < 0) return EXIT_FAILURE;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << left << setw(WIDTH_TEXT) << "- nbre de boisson" << ':';
    cin >> nbreBoisson;
    if (nbreBoisson > 10 || nbreBoisson < 0) return EXIT_FAILURE;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << left << setw(WIDTH_TEXT) << "- nbre de dessert" << ':';
    cin >> nbreDessert;
    if (nbreDessert > 10 || nbreDessert < 0) return EXIT_FAILURE;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << left << setw(WIDTH_TEXT) << "- nbre de cafe" << ':';
    cin >> nbreCafe;
    if (nbreCafe > 10 || nbreCafe < 0) return EXIT_FAILURE;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

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
         << right << setw(WIDTH_NBRE) << nbreEntree
         << left << setw(WIDTH_TEXT) << " entrees" << ':'
         << right << setw(WIDTH_VALEUR) << totalEntrees << endl
         << "- "
         << right << setw(WIDTH_NBRE) << nbrePlat
         << left << setw(WIDTH_TEXT) << " plats" << ':'
         << right << setw(WIDTH_VALEUR) << totalPlat << endl
         << "- "
         << right << setw(WIDTH_NBRE) << nbreBoisson
         << left << setw(WIDTH_TEXT) << " boissons" << ':'
         << right << setw(WIDTH_VALEUR) << totalBoisson << endl
         << "- "
         << right << setw(WIDTH_NBRE) << nbreDessert
         << left << setw(WIDTH_TEXT) << " desserts" << ':'
         << right << setw(WIDTH_VALEUR) << totalDessert << endl
         << "- "
         << right << setw(WIDTH_NBRE) << nbreCafe
         << left << setw(WIDTH_TEXT) << " cafes" << ':'
         << right << setw(WIDTH_VALEUR) << totalCafe << endl
         << "- "
         << right << setw(WIDTH_NBRE + WIDTH_TEXT) << " TOTAL" << ':'
         << right << setw(WIDTH_VALEUR) << total << endl
         << "merci de votre visite" << endl << endl;

    //---------------------------------------------------------------------------------
    //Fin de programme
    cout << "Pressez ENTER pour quitter";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');    // Vider le buffer
    return EXIT_SUCCESS;
}