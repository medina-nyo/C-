#ifndef Vect_h
#define Vect_h

#include <iostream>

class Matrice;

class Vect
{
    private:
    double x,y,z;
    
    public:
    Vect(double i, double j, double k);
    void affichage();
    friend void prod(Matrice &m, Vect &v);
};

#endif
