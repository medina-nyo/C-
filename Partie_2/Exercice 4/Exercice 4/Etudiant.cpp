#include "Etudiant.h"
#include <iostream>

using namespace std;

Etudiant::Etudiant(string n, string p, float tab[max_notes])
{
    nom = n;
    prenom = p;
    
    for(int i=0; i<max_notes; i++)
    {
        tab_Notes[i] = tab[i];
    }
}

Etudiant::Etudiant()
{
    nom = prenom = "";
    tab_Notes[max_notes-1] = 0;
}


void Etudiant::saisie()
{
    cout << "Entre les informations de l'étudiant." << endl;
    cout << "Nom : ";
    cin >> nom;
    
    cout << "Prénom : ";
    cin >> prenom;
    
    for(int i=0; i<10; i++)
    {
        cout << "note " << i+1 << " : ";
        cin >> tab_Notes[i];
    }
    
}

void Etudiant::affichage()
{
    cout << "Nom : " << nom << endl;
    cout << "Prénom : " << prenom << endl;
    
    cout << "Notes de l'étudiant : ";
    for(int i=0; i<max_notes; i++)
    {
        cout << tab_Notes[i] << " ";
    }
    cout << endl;
}

float Etudiant::moyenne()
{
    float moyenne = 0;
    
    for(int i=0; i<max_notes; i++)
    {
        moyenne += tab_Notes[i];
    }
    
    return moyenne /= max_notes;
}

int Etudiant::admis()
{
    if(moyenne()>= 10)
    {
        return 1;
    }
    return 0;
}

int Etudiant::exae_quo(Etudiant e)
{
    if(moyenne() == e.moyenne())
    {
        return 1;
    }
    return 0;
}
