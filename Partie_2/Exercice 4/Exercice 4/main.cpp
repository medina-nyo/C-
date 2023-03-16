#include <iostream>
#include "Etudiant_en_Maitrise.h"

using namespace std;

int main()
{
    float tab[max_notes]{12,13,14,15,20,9,17,16,14,19};
    Etudiant_en_Maitrise m("medina","oukaci",tab,18);
    Etudiant_en_Maitrise d;
    
    m.affichage();
    cout << "Etudiant est t'il admis : " << m.admis() << endl;
    cout << "Moyenne étudiant : " << m.moyenne() << endl << endl;
    
    d.saisie();
    cout << endl;
    d.affichage();
    cout << "Etudiant est t'il admis : " << d.admis() << endl;
    cout << "Moyenne étudiant : " << d.moyenne() << endl;
    cout << "m et d sont t'il exae quo  : " << m.exae_quo(d) << endl;
    

    
    return 0;
}
