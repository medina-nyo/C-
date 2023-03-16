#ifndef Etudiant_h
#define Etudiant_h

#include <string>
using namespace std;

int const max_notes = 10;
class Etudiant
{
    protected:
    string nom, prenom;
    float tab_Notes[max_notes];
    
    public:
    Etudiant(string n, string p, float tab[max_notes]);
    Etudiant();
    void saisie();
    void affichage();
    float moyenne();
    int admis();
    int exae_quo(Etudiant e);
};

#endif
