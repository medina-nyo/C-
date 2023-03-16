#include "Voiture.h"
#include <iostream>

using namespace std;

Voiture::Voiture(string m, int a, double p, double d)
{
    marque = m;
    annee = a;
    prix_Achat = p;
    decote = 5;
}

void Voiture::affiche()
{
    cout << "Marque : " << marque << endl;
    cout << "Année : " << annee << endl;
    cout << "Prix d'achat : " << prix_Achat << "euros" << endl;
    cout << "Décote : " << decote << endl;
}

double Voiture::calcul_prix_actuel()
{
    double prix_actuel = prix_Achat - (prix_Achat * decote / 100);
    return prix_actuel;
}
