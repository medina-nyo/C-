#ifndef Matrice_h
#define Matrice_h


#include <iostream>

int const N = 3;
int const M = 3;
class Vect;

class Matrice
{
    private:
    double matrice[N][M];
    
    public:
    Matrice(double tab[N][M]);
    void affichage();
    friend void prod(Matrice &m, Vect &v);
};

#endif
