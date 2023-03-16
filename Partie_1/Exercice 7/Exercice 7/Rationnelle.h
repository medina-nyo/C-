#ifndef Rationnelle_h
#define Rationnelle_h

#include <iostream>

class Rationnelle
{
    private:
    int numerateur, denominateur;
  
    public:
    Rationnelle();
    Rationnelle(int n, int d);
    void pgcd(int a, int b);
    void setDenominateur(int d);
    void setNumerateur (int n);
    void affichage();
    void inverseFraction();
    int partieEntiereFraction();
};


#endif
