#include "Cercle.hpp"
#include <iostream>
#include <cmath>

using namespace std;


Cercle::Cercle(float rayon, float abs,float ord)
{
    if(rayon < 0)
    {
        rayon = 0;
    }
    r = rayon;
    x = abs;
    y = ord;
}

float Cercle::airCercle ()
{
    float air;
    air = 2 * (r * r);
    
    return air;
}

float Cercle::perimetreCercle ()
{
    float perimetre;
    perimetre = 2 * M_PI * r;
    
    return perimetre;
}

void Cercle::affichageCoordonnee()
{
    cout << "Coordonnée du centre C(" << x << ";" << y << ")" << endl;
    cout << "Longueur du rayon R = " << r << endl;
}
void Cercle::setRayon (float rayon)
{
    r = rayon;
}
void Cercle::setAbscisse (float abs)
{
    x = abs;
}

void Cercle::setOrdonnee (float ord)
{
    y = ord;
}

bool Cercle::interieurPoint (float abs, float ord)
{
    bool appartientCercle{true};
    float resultat;
    
    resultat = (abs - x) * (abs - x) + (ord - y) * (ord - y) ;
    if(resultat == (r * r))
    {
        appartientCercle = true;
    }
    else
    {
        appartientCercle = false;
    }
    return appartientCercle;
}

void Cercle::translationCercle(float abs, float ord)
{
    x += abs;
    y += ord;
}

void Cercle::homothetieCercle(float k)
{
    float xA = 1, yA = 1;
    float xc, yc, rayon;
    
    xc = (k * x) + (k * (- xA)) + xA;
    yc = (k * x) + (k * (-yA)) + yA;
    rayon = r * k;
    
    setAbscisse(xc);
    setOrdonnee(yc);
    setRayon(rayon);

}
