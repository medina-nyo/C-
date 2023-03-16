#include <iostream>
#include "Duree.hpp"

using namespace std;

int main()
{
    Duree a (0, 65,65);
    a.affichageDuree();
    cout << a.duree_Convertie() << " secondes" << endl;
    
    int sec = 20;
    a.ajouteSecondes(sec);
    a.affichageDuree();
    return 0;
}
