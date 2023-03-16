#include "Roman_graphique.h"
#include <iostream>

using namespace std;

Roman_graphique::Roman_graphique(string t, string a, int p, bool g, string d, bool i) : Livre(t,a,p), Roman(t,a,p,g), BD(t,a,p,d)
{
    apprecie_par_Inrocks = i;
}

void Roman_graphique::affiche()
{
    BD::affiche();
    cout << "A t'il remporté le prix Goncourt : " << goncourt << endl;
    cout << "Est t'il apprécié par Inrocks : " << apprecie_par_Inrocks << endl;
}

void Roman_graphique::calculer_prix()
{
    cout << "Prix du Roman graphique : " << 0.2 * pages << " euros." << endl;
}
