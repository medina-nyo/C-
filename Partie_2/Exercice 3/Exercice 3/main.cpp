#include <iostream>
#include "Voiture_Collection.h"

using namespace std;

int main()
{
    Voiture v("renault",2018,1000,5);
    Voiture_Collection c("citroen",2019,2000,2,"citroen");
    v.affiche();
    cout << "Prix achat actuel : " << v.calcul_prix_actuel() << endl;
    cout << endl << endl;
    
    c.affiche();
    cout << "Prix achat actuel : " << c.calcul_prix_actuel() << endl;
    return 0;
}
