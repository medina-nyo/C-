#include <iostream>
#include "Vect.h"
#include "Matrice.h"

using namespace std;

void prod(Matrice &m, Vect &v)
{
    double vecteur[3] = {v.x,v.y,v.z};
    double tab[3];
    
    for(int i=0; i<3; i++)
    {
        tab[i] = 0;
    }
    
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            tab[i] += m.matrice[i][j] * vecteur[j];
        }
    }
    
    v.x = tab[0];
    v.y = tab[1];
    v.z = tab[2];
}


int main()
{
    Vect v(-1,1,-1);
    cout << "Affichage du vecteur V : " << endl;
    v.affichage();
    
    double matrice[N][M] = {1,2,-1,0,1,0,-2,3,1};
    Matrice m(matrice);
    m.affichage();
    
    cout << "Le vecteur produit M*V : " << endl;
    prod(m, v);
    v.affichage();
    
    
    return 0;
}
