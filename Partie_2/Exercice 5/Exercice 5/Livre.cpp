#include "Livre.h"
#include <iostream>

using namespace std;

Livre::Livre(string t, string a, int p)
{
    titre = t;
    auteur = a;
    pages = p;
}

void Livre::affiche()
{
    cout << "Titre : " << titre << endl;
    cout << "Auteur : " << auteur << endl;
    cout << "Nombre de pages : " << pages << endl;
}
