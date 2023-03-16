#ifndef Etudiant_en_Maitrise_h
#define Etudiant_en_Maitrise_h

#include "Etudiant.h"

class Etudiant_en_Maitrise : public Etudiant
{
    private:
    float note_memoire;
    
    public:
    Etudiant_en_Maitrise(string n, string p, float tab[max_notes], float m);
    Etudiant_en_Maitrise();
    void saisie();
    void affichage();
    float moyenne();
    int admis();
    int exae_quo(Etudiant_en_Maitrise E);
};

#endif
