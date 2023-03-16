#include "Matrice.h"
#include <iostream>

using namespace std;

Matrice::Matrice(double tab[N][M])
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            matrice[i][j] = tab[i][j];
        }
    }
}

void Matrice::affichage()
{
    cout << "Affichage de la matrice M : " << endl;
    
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
