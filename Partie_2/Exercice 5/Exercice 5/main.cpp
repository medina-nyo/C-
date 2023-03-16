#include <iostream>
#include "Roman_graphique.h"

int main()
{
    Livre a("Les Misérables", "Victor Hugo", 210);
    Roman r("Harry Potter", "j.k. Rowling", 319,true);
    BD b("Les sisters", "William Maury", 114, "Christophe");
    Roman_graphique g("Bombe", "Alcante", 119, false, "Denis Rodier", true);
    
    
    a.affiche();
    
    cout << endl << endl;
    cout << "Information sur le roman : " << endl;
    r.affiche();
    r.calculer_prix();
    
    cout << endl << endl;
    cout << "Information sur la bande dessinée : " << endl;
    b.affiche();
    b.calculer_prix();
    
    cout << endl << endl;
    cout << "Information sur le roman graphique : " << endl;
    g.affiche();
    g.calculer_prix();
    
    
    return 0;
}
