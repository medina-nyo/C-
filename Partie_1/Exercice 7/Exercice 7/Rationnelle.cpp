#include "Rationnelle.h"
#include<iostream>

using namespace std;

Rationnelle::Rationnelle()
{
    numerateur = 0;
    denominateur = 1;
}

Rationnelle::Rationnelle(int n, int d)
{
    if(d < 0)
    {
        numerateur = n * (-1);
    }
    else
    {
        numerateur = n;
    }
    setDenominateur(d);
    pgcd(numerateur, denominateur);
}

void Rationnelle::pgcd(int a, int b)
{
    if(a < 0)
    {
        a = -a;
    }
    
    if(a-b == 0)
    {
        numerateur /= a;
        denominateur /= a;
    }
    else if(a > b)
    {
        pgcd(a-b, b);
    }
    else
    {
        pgcd(a, b-a);
    }
}

void Rationnelle::setDenominateur(int d)
{
    if(d == 0)
    {
        denominateur = 1;
    }
    else if (d < 0)
    {
        denominateur = d * (-1);
    }
    else
    {
        denominateur = d;
    }
}

void Rationnelle::setNumerateur (int n)
{
    if(denominateur < 0)
    {
        numerateur *= -1;
    }
    numerateur = n;
}

void Rationnelle::affichage()
{
    cout << numerateur << "/" << denominateur << endl;
}

void Rationnelle::inverseFraction()
{
    int temp;
    
    if(numerateur < 0)
    {
        temp = denominateur;
        setDenominateur(numerateur);
        numerateur = temp * (-1);
    }
    else
    {
        temp = denominateur;
        denominateur = numerateur;
        numerateur = temp;
    }
}

int Rationnelle::partieEntiereFraction()
{
    return numerateur / denominateur;
}
