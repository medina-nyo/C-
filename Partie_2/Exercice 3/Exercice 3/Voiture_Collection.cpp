#include "Voiture_Collection.h"
#include <iostream>

using namespace std;

Voiture_Collection::Voiture_Collection(string m, int a, double p, double d, string b)
: Voiture(m, a, p, d)
{
    decote = 1;
    bois_tableau_bord = b;
}

void Voiture_Collection::affiche()
{
    Voiture::affiche();
    cout << "Marque du tableau de bord bois : " << bois_tableau_bord << endl;
}

double Voiture_Collection::calcul_prix_actuel()
{
    double prix_actuel = Voiture::calcul_prix_actuel();
    return prix_actuel;
}
