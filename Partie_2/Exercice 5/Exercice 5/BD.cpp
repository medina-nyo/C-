#include "BD.h"
#include <iostream>

using namespace std;

BD::BD(string t, string a, int p, string d): Livre(t, a, p)
{
    dessinateur = d;
}

void BD::affiche()
{
    Livre::affiche();
    cout << "Illustrateur : " << dessinateur << endl;
}

void BD::calculer_prix()
{
    cout << "Prix de la bande dessinée : " << 0.03 * pages << " euros." << endl;
}
