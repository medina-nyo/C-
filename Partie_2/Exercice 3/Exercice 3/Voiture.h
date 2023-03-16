#ifndef Voiture_h
#define Voiture_h

#include <string>

using namespace std;

class Voiture
{
    protected:
    string marque;
    int annee;
    double prix_Achat;
    double decote;
    
    public:
    Voiture(string m, int a, double p, double d);
    void affiche();
    double calcul_prix_actuel();
};

#endif
