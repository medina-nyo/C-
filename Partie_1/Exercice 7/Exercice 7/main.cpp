#include <iostream>
#include "Rationnelle.h"

using namespace std;

int main()
{
    int entier;
    Rationnelle b(250,-320);
    b.affichage();
    b.inverseFraction();
    b.affichage();
    entier = b.partieEntiereFraction();
    cout << "Partie entier = " << entier << endl;
    

    return 0;
}
