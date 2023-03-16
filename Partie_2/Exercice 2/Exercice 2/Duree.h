#ifndef Duree_h
#define Duree_h

#include<iostream>
using namespace std;

class Duree
{
    private:
    int heures, minutes, secondes;
    
    public:
    Duree();
    Duree(int h, int min, int sec);
    void affichageDuree();
    void setHeures (int h);
    void setMinutes (int min);
    void setSecondes (int sec);
    int getHeure();
    int getMinutes();
    int getSecondes();
    int duree_Convertie();
    void ajouteSecondes(int sec);
    Duree operator+(const Duree &d1);
    Duree operator-(const Duree &d1);
    bool operator==(const Duree &d1);
    bool operator<(Duree &d1);
};
ostream& operator<<(ostream &sortie, Duree &d1);
istream& operator>>(istream &entree, Duree &d1);

#endif
