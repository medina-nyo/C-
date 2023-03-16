#ifndef Cercle_h
#define Cercle_h

#include "Point.h"

class Cercle
{
    private :
    double rayon;
    Point *p;
    
    public :
    Cercle();
    Cercle(double r, double x, double y); // constructeur
    Cercle (const Cercle &c); // constructeur de copie
    Cercle& operator=(const Cercle &c);
    ~Cercle();
    
    double airCercle();
    double perimetreCercle();
    void affichageCoordonnee();
    void setRayon(double r);
    void setP(Point *nouveauPoint);
    bool interieurPoint (Point *nouveauPoint);
    void translationCercle (Point *nouveauPoint);
    void homothetieCercle(double k);
};
#endif
