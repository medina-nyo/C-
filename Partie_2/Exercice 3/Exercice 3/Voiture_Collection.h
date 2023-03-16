#ifndef Voiture_Collection_h
#define Voiture_Collection_h
#include <string>
#include "Voiture.h"

using namespace std;

class Voiture_Collection : public Voiture
{
    private:
    string bois_tableau_bord;
    
    public:
    Voiture_Collection(string m, int a, double p, double d, string b);
    void affiche();
    double calcul_prix_actuel();
};

#endif
