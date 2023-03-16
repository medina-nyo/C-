#include "Roman.h"
#include <iostream>

using namespace std;

Roman::Roman(string t, string a, int p, bool g) : Livre(t, a, p)
{
    goncourt = g;
}

void Roman::affiche()
{
    Livre::affiche();
    cout << "A t'il remporté le prix Goncourt : " << goncourt << endl;
}

void Roman::calculer_prix()
{
    cout << "Prix du roman : " << 0.01 * pages << " euros." << endl;
}
