#include "Cercle.h"
#include <iostream>

using namespace std;

Cercle::Cercle()
{
    rayon = 0;
    p = new Point();
}

Cercle::Cercle(double r, double x, double y)
{
    if(r < 0)
    {
        rayon = -r;
    }
    else
    {
        rayon = r;
    }
    
    p = new Point(x,y);
}

Cercle::Cercle(const Cercle &c)
{
    if(c.rayon < 0)
    {
        rayon = -c.rayon;
    }
    else
    {
        rayon = c.rayon;
    }
    p = new Point(*(c.p));
}

Cercle &Cercle::operator=(const Cercle &c)
{
    if(this != &c)
    {
        rayon = c.rayon;
        delete p;
        p = new Point(*(c.p));
    }
    return *this;
}

Cercle::~Cercle()
{
    delete p;
}

double Cercle::airCercle ()
{
    double air;
    air = 2 * (rayon * rayon);
    
    return air;
}

double Cercle::perimetreCercle ()
{
    double perimetre;
    perimetre = 2 * M_PI * rayon;
    
    return perimetre;
}

void Cercle::affichageCoordonnee()
{
    cout << "Coordonnée du centre (" ;
    cout << p->getAbscisse() << ";" << p->getOrdonnee() << ")" << endl;
    cout << "Longueur du rayon R = " << rayon << endl << endl;
}

void Cercle::setRayon (double r)
{
    rayon = r;
}
void Cercle::setP(Point *nouveauPoint)
{
    p = nouveauPoint;
}

bool Cercle::interieurPoint (Point *nouveauPoint)
{
    bool appartientCercle{true};
    double resultat, xA, xB;
    
    xA = (nouveauPoint->getAbscisse() - p->getAbscisse()) * (nouveauPoint->getAbscisse() - p->getAbscisse());
    xB = (nouveauPoint->getOrdonnee() - p->getOrdonnee()) * (nouveauPoint->getOrdonnee() - p->getOrdonnee());
    resultat =  xA + xB;
    
    if(resultat == (rayon * rayon))
    {
        appartientCercle = true;
    }
    else
    {
        appartientCercle = false;
    }
    return appartientCercle;

}

void Cercle::translationCercle (Point *nouveauPoint)
{
    p->setAbscisse(p->getAbscisse() + nouveauPoint->getAbscisse());
    p->setOrdonnee(p->getOrdonnee() + nouveauPoint->getOrdonnee());
}

void Cercle::homothetieCercle(double k)
{
    
    double xA = 1, yA = 1;
    double xc, yc, r;
    
    xc = (k * p->getAbscisse()) + (k * (- xA)) + xA;
    yc = (k * p->getAbscisse()) + (k * (-yA)) + yA;
    r = rayon * k;
    
    p->setAbscisse(xc);
    p->setOrdonnee(yc);
    setRayon(r);
}
