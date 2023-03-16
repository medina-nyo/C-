#include <iostream>
#include "Duree.h"

using namespace std;

int main() {
    
    Duree a (1, 65,5);
    Duree b(1,55,5), c;
    int sec = 60;
    
    /*a.affichageDuree();
    cout << a.duree_Convertie() << " secondes" << endl;

    a.ajouteSecondes(sec);
    a.affichageDuree();
    
    c = a + b;
    c.affichageDuree();
    
    c= a-b;
    c.affichageDuree();*/
    
    if(a < b)
    {
        cout << "L'heure est superieur" << endl;
    }
    else if(a == b)
    {
        cout << "Elles sont égaux." << endl;
    }
    else{
        cout << "L'heure est inférieur." << endl;
    }
    
    cin >> c;
    cout << c << endl;
    
    return 0;
}
