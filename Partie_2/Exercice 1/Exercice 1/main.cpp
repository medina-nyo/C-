#include <iostream>
#include "Cercle.h"

using namespace std;

int main()
{
    Cercle C(5,2,3);
    Cercle d;
    Point p(4,3);
    Point t(3,6);
    
    cout << "Aire du cercle : " << C.airCercle() << endl;

    
    cout << "Périmètre du cercle : " << C.perimetreCercle() << endl;
    C.affichageCoordonnee();
    cout << boolalpha << C.interieurPoint(&p) << endl;
    
    C.translationCercle(&t);
    C.affichageCoordonnee();
    
    C.homothetieCercle(2);
    C.affichageCoordonnee();
    
    d = C;
    d.affichageCoordonnee();
  
    return 0;
}
