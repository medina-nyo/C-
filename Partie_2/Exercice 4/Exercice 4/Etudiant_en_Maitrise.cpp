#include "Etudiant_en_Maitrise.h"
#include <iostream>

using namespace std;

Etudiant_en_Maitrise::Etudiant_en_Maitrise
 (string n, string p, float tab[max_notes], float m) : Etudiant(n, p,tab)
{
    note_memoire = m;
}
Etudiant_en_Maitrise::Etudiant_en_Maitrise() : Etudiant()
{
    note_memoire = 0;
}

void Etudiant_en_Maitrise::saisie()
{
    Etudiant::saisie();
    cout << "Entre la note mémoire : " ;
    cin >> note_memoire;
}

void Etudiant_en_Maitrise::affichage()
{
    Etudiant::affichage();
    cout << "Note mémoire : " << note_memoire << endl;
}

float Etudiant_en_Maitrise::moyenne()
{
    float moyenne = 0;
    
    for(int i=0; i<max_notes; i++)
    {
        moyenne += tab_Notes[i];
    }
    moyenne += note_memoire;
    
    return moyenne  /= max_notes + 1;
}

int Etudiant_en_Maitrise::admis()
{
    int moyenne_admis = Etudiant::admis();
    if(moyenne_admis == 1 || note_memoire >= 10)
    {
        return 1;
    }
    return 0;
}

int Etudiant_en_Maitrise::exae_quo(Etudiant_en_Maitrise E)
{
    int exaequo = Etudiant::exae_quo(E);
    return exaequo;
}
